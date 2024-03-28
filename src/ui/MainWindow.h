//
// Created by user on -24-March-2024-.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QStringListModel>

#include "ui_MainFrame.h"
#include "../student/Student.h"

namespace Ui {
    class MainFrame final : public QMainWindow, public MainWindow {
        QStringListModel* model = new QStringListModel(studentsList);
    public:
        explicit MainFrame(QWidget *parent = nullptr);

        private slots:
            void buttonPressed() const;

            void updateStudentList() const;
    }; // namespace Ui
} // Ui

#endif //MAINWINDOW_H
