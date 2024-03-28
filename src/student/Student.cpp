//
// Created by user on -24-March-2024-.
//

#include "Student.h"

#include <algorithm>
#include <sstream>
#include <stdexcept>

namespace Students {
    Student::Student(std::string _surname) : surname(std::move(_surname)) {
        studies = new std::vector<StudyType>();
    }

    std::string Student::getSurname() {
        return surname;
    }

    std::string Student::toString() {
        std::stringstream ss;
        ss << getSurname() << ": ";
        for (int i = 0; i < studies->size(); ++i) {
            if (i != 0) {
                ss << ", ";
            }
            switch ((*studies)[i]) {
                case MATH:
                    ss << "Математика";
                break;
                case PHYSICS:
                    ss << "Физика";
                break;
                case BIOLOGY:
                    ss << "Биология";
                break;
                case CHEMISTRY:
                    ss << "Химия";
                break;
                default:
                    throw std::invalid_argument("Invalid study type");
            }
        }
        return ss.str();
    }


    std::vector<StudyType> *Student::getStudies() const {
        return studies;
    }

    bool Student::containsStudy(const StudyType study) const {
        return std::find(studies->begin(), studies->end(), study) != studies->end();
    }

    void Student::addStudy(const StudyType study) const {
        studies->push_back(study);
    }

    void Student::addStudy(const std::string &studyString) const {
        StudyType study;
        if (studyString == "math" || studyString == "Математика") {
            study = MATH;
        } else if (studyString == "physics" || studyString == "Физика") {
            study = PHYSICS;
        } else if (studyString == "biology" || studyString == "Биология") {
            study = BIOLOGY;
        } else if (studyString == "chemistry" || studyString == "Химия") {
            study = CHEMISTRY;
        } else {
            throw std::invalid_argument("Invalid study type");
        }
        this->addStudy(study);
    }
} // Students
