//
// Created by Amira Balkiyaeva on 15.10.2021.
//

#include "Lecturer.h"
#include <iostream>

Lecturer::Lecturer(int id, const string &name) : id(id), name(name) {}

int Lecturer::getId() const {
    return id;
}

void Lecturer::setId(int id) {
    Lecturer::id = id;
}

const string &Lecturer::getName() const {
    return name;
}

void Lecturer::setName(const string &name) {
    Lecturer::name = name;
}

ostream &operator<<( ostream &output, const Lecturer &lecturer ){
    output << "\nLecturer's ID" << lecturer.getId() << "\tLecturer's name: " << lecturer.getName();
    return output;
}

istream &operator>>( istream  &input,  Lecturer &lecturer ){
    cout << "\nInput Lecturer's id and name:";
    input >> lecturer.id >> lecturer.name;
    return input;
}

bool operator==(const Lecturer &lv, const Lecturer &rv){
    if (lv.getId() == rv.getId() && lv.getName() == rv.getName()){
        return true;
    }
    else return false;
};