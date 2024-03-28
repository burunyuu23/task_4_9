//
// Created by user on -24-March-2024-.
//

#ifndef STUDENT_H
#define STUDENT_H
#include <algorithm>
#include <string>
#include <vector>

namespace Students {
    enum StudyType {
        MATH,
        PHYSICS,
        BIOLOGY,
        CHEMISTRY,
    };

class Student {
    std::string surname;
    std::vector<StudyType>* studies;

public:
    explicit Student(std::string  _surname);

    std::string getSurname();

    [[nodiscard]] std::string toString();

    [[nodiscard]] std::vector<StudyType>* getStudies() const;
    bool containsStudy(StudyType study) const;
    void addStudy(StudyType study) const;
    void addStudy(const std::string &studyString) const;
};

} // Students

#endif //STUDENT_H
