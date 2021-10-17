//
// Created by Amira Balkiyaeva on 15.10.2021.
//

#ifndef ASS4_COURSE_H
#define ASS4_COURSE_H
#include <string>
#include "Lecturer.h"

using namespace std;

class Course {
private:

    string name;
    int students;
    Lecturer lecturer;
public:

    Course(){};
    Course(string name, int students, Lecturer lecturer);

    const string &getName() const;

    void setName(const string &name);

    int getStudents() const;

    void setStudents(int students);

    const Lecturer &getLecturer() const;

    void setLecturer(const Lecturer &lecturer);

    friend ostream &operator<<( ostream &output, const Course &course );

    friend istream &operator>>( istream  &input,  Course &course );

    friend bool operator==(const Course &lv, const Course &rv);
};


#endif //ASS4_COURSE_H
