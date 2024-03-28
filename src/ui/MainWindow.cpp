//
// Created by user on -24-March-2024-.
//

#include "MainWindow.h"
#include <QFileDialog>
#include <QFile>
#include <QDebug>
#include <QStringListModel>

#include "../students_list/StudentList.h"

namespace Ui {
    Students::StudentList* student_list = nullptr;
    MainFrame::MainFrame(QWidget *parent) : QMainWindow(parent), MainWindow() {
        setupUi(this); // Инициализируем UI

        connect(fileLoaderButton, &QPushButton::pressed, this, &MainFrame::buttonPressed);

        connect(MathCheckbox, &QPushButton::toggled, this, [this](){ updateStudentList(); });
        connect(MathCheckboxExclude, &QPushButton::toggled, this, [this](){ updateStudentList(); });

        connect(PhysicsCheckbox, &QPushButton::toggled, this, [this](){ updateStudentList(); });
        connect(PhysicsCheckboxExclude, &QPushButton::toggled, this, [this](){ updateStudentList(); });

        connect(BiologyCheckbox, &QPushButton::toggled, this, [this](){ updateStudentList(); });
        connect(BiologyCheckboxExclude, &QPushButton::toggled, this, [this](){ updateStudentList(); });

        connect(ChemistryCheckbox, &QPushButton::toggled, this, [this](){ updateStudentList(); });
        connect(ChemistryCheckboxExclude, &QPushButton::toggled, this, [this](){ updateStudentList(); });
    }

    void MainFrame::updateStudentList() const {
        if (student_list) {
            QStringList stringList;
            for(Students::Student* student : student_list->build()
                // TODO: разобраться с exclude
                ->math(MathCheckboxExclude->isChecked(), MathCheckbox->isChecked())
                ->physics(PhysicsCheckboxExclude->isChecked(),PhysicsCheckbox->isChecked())
                ->biology(BiologyCheckboxExclude->isChecked(),BiologyCheckbox->isChecked())
                ->chemistry(ChemistryCheckboxExclude->isChecked(), ChemistryCheckbox->isChecked())
                ->getSelectedStudents()) {
                stringList << student->toString().data();
            }
            model->setStringList(stringList);
            studentsList->setModel(model);
        }
    }

    void MainFrame::buttonPressed() const {
        if (const QString filePath = QFileDialog::getOpenFileName(
                centralwidget,
                tr("Выберите файл"),
                "",
                tr("Text Files (*.txt)"));
            !filePath.isEmpty()
        ) {
            QFile file(filePath);
            if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                QTextStream in(&file);
                auto* students = new std::vector<Students::Student*>();
                student_list = new Students::StudentList(*students);

                while (!in.atEnd()) {
                    QString line = in.readLine().trimmed();
                    if (QStringList wordList = line.split(" ", Qt::SkipEmptyParts); wordList.size() == 2) {
                        std::string surname = wordList[0].toStdString();
                        std::string study = wordList[1].toStdString();
                        if (const auto* findedStudent = student_list->findStudentBySurname(surname); findedStudent != nullptr) {
                            findedStudent->addStudy(study);
                        } else {
                            auto* student = new Students::Student(surname);
                            student->addStudy(study);
                            students->push_back(student);
                        }
                    }
                }
                file.close();

                QStringList stringList;
                for(Students::Student* student : student_list->build()->getSelectedStudents()) {
                    stringList << student->toString().data();
                }
                model->setStringList(stringList);
                studentsList->setModel(model);
            } else {
                qDebug() << "Не удалось открыть файл:" << file.errorString();
            }
        }
    }
} // Ui
