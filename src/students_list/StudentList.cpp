//
// Created by user on -24-March-2024-.
//

#include "StudentList.h"

namespace Students {

    StudentList::StudentList(std::vector<Student *> &_students) : originalStudents(&_students) {
    }

    Student* StudentList::findStudentBySurname(const std::string& surname) {
        for (auto student : *originalStudents) {
            if (student->getSurname() == surname) {
                return student;
            }
        }
        return nullptr;
    }

    StudentListNode* StudentList::build() const {
        return new StudentListNode(*originalStudents);
    }
} // namespace Students
