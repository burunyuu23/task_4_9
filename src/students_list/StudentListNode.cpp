//
// Created by user on -24-March-2024-.
//

#include "StudentListNode.h"

#include <algorithm>

namespace Students {
    StudentListNode::StudentListNode(const std::vector<Student *> &filteredStudents) {
        this->filteredStudents = new std::vector(filteredStudents.begin(), filteredStudents.end());
    }

    StudentListNode* StudentListNode::filterByType(StudyType studyType, bool exclude) {
        std::vector<Student *> tempFilteredStudents;
        std::copy_if(filteredStudents->begin(), filteredStudents->end(), std::back_inserter(tempFilteredStudents),
             [studyType, exclude](const Student* student) {
                 return (student->containsStudy(studyType) && exclude == false) ||
                     (!student->containsStudy(studyType) && exclude == true);
             });
        delete filteredStudents;
        filteredStudents = new std::vector(tempFilteredStudents);
        return this;
    }

    StudentListNode* StudentListNode::math(const bool exclude = false, const bool filter = true) {
        if (filter) {
            filterByType(MATH, exclude);
        }
        return this;
    }

    StudentListNode* StudentListNode::physics(const bool exclude = false, const bool filter = true) {
        if (filter) {
            filterByType(PHYSICS, exclude);
        }
        return this;
    }

    StudentListNode* StudentListNode::biology(const bool exclude = false, const bool filter = true) {
        if (filter) {
            filterByType(BIOLOGY, exclude);
        }
        return this;
    }

    StudentListNode* StudentListNode::chemistry(const bool exclude = false, const bool filter = true) {
        if (filter) {
            filterByType(CHEMISTRY, exclude);
        }
        return this;
    }

    std::vector<Student *> StudentListNode::getSelectedStudents() const {
        return *filteredStudents;
    }
} // Students