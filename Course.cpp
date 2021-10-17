//
// Created by Amira Balkiyaeva on 15.10.2021.
//

#include "Course.h"
#include <iostream>

Course::Course(string name, int students, Lecturer lecturer): name(name), students(students), lecturer(lecturer){}

const string &Course::getName() const {
    return name;
}

void Course::setName(const string &name) {
    Course::name = name;
}

int Course::getStudents() const {
    return students;
}

void Course::setStudents(int students) {
    Course::students = students;
}

const Lecturer &Course::getLecturer() const {
    return lecturer;
}

void Course::setLecturer(const Lecturer &lecturer) {
    Course::lecturer = lecturer;
}

ostream &operator<<( ostream &output, const Course &course ){

    output << "Course name: " << course.getName() << "\t Number of the students: " << course.getStudents() << "\t " << course.getLecturer();
    return output;
}

istream &operator>>( istream  &input,  Course &course ) {
    cout << "\nInput course name, number of the students, and lecturer";
    input >> course.name >> course.students >> course.lecturer;
    return input;
}

bool operator==(const Course &lv, const Course &rv){
    if (lv.name == rv.name && lv.getStudents() == rv.getStudents()  && lv.getLecturer() == rv.getLecturer()){
        return true;
    }
    else return false;
}
