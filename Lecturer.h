//
// Created by Amira Balkiyaeva on 15.10.2021.
//

#ifndef ASS4_LECTURER_H
#define ASS4_LECTURER_H

#include <string>

using namespace std;

class Lecturer {
private:
    int id;
    string name;
public:
    Lecturer(){};

    Lecturer(int id, const string &name);

    int getId() const;

    void setId(int id);

    const string &getName() const;

    void setName(const string &name);

    friend ostream &operator<<( ostream &output, const Lecturer &lecturer );

    friend istream &operator>>( istream  &input,  Lecturer &lecturer );

    friend bool operator==(const Lecturer &lv, const Lecturer &rv);
};


#endif //ASS4_LECTURER_H
