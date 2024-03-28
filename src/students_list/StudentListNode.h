//
// Created by user on -24-March-2024-.
//

#ifndef STUDENTLISTNODE_H
#define STUDENTLISTNODE_H

#include <vector>
#include "../student/Student.h"

namespace Students {

class StudentListNode {
        std::vector<Student *>* filteredStudents;

public:
        explicit StudentListNode(const std::vector<Student *> &filteredStudents);

        StudentListNode* filterByType(StudyType studyType, bool exclude);
        StudentListNode* math(bool exclude, bool filter);
        StudentListNode* physics(bool exclude, bool filter);
        StudentListNode* biology(bool exclude, bool filter);
        StudentListNode* chemistry(bool exclude, bool filter);

        [[nodiscard]] std::vector<Student *> getSelectedStudents() const;
};

} // Students

#endif //STUDENTLISTNODE_H
