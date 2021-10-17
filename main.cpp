#include <iostream>
#include <string.h>
#include <typeinfo>
#include <algorithm>
#include <vector>
#include <ctime>
#include "Course.h"
#include "IEEE.h"
#include "ACM.h"

template<typename T>
class Student{
private:
    string name;
    int id;
    int age;
    vector<Course> courses;
    T activities;

public:

    Student() {}

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Student::name = name;
    }

    int getId() const {
        return id;
    }

    void setId(int id) {
        Student::id = id;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Student::age = age;
    }

    const vector<Course> &getCourses() const {
        return courses;
    }

    void setCourses(const vector<Course> &courses) {
        Student::courses = courses;
    }

    const set<T> &getActivities() const {
        return activities;
    }

    void setActivities(const set<T> &activities) {
        Student::activities = activities;
    }

    friend ostream &operator<<( ostream &output, const Student<T> &student ) {
        output << "\nName\t\t" << "ID\t\t\t" << "Age\t\t" << "Activities\t\t" << "Courses";
        output << "\n________________________________________________________";
        string act = typeid(T).name();
        output << "\n" << student.getName() << "\t\t" << student.getId() << "\t\t" << student.getAge() << "\t\t" << act.substr(1,4) << "\t\t";
        for (auto it = student.courses.begin(); it != student.courses.end(); ++it) {
            output << "\t" << it->getName() << "\n\t\t\t\t\t\t\t\t\t\t\t";
        }
        output << "\n";
        return output;
    }

    friend istream &operator>>( istream  &input, Student<T> &student ) {
        cout << "Input ID, name, and age" << endl;
        input >> student.id >> student.name >> student.age;
        return input;
    }

    friend bool operator==(const Student<T> &lv, const Student<T> &rv){
        if (lv.name == rv.name && lv.id == rv.id && lv.age == rv.age && lv.getCourses() == rv.getCourses()){
            return true;
        }
        else return false;
    }
};
int random(int number){
    return rand()%number;
}

int main() {
    srand(time(NULL));
    string names[10] = {"Don", "Mano", "Lou", "Aang", "Katara", "Soka", "Toph", "Kakashi", "Itachi", "Tsunade"};
    string surnames[10] = {"Karlo", "Hatake", "Uchiha", "Lee", "Senpai", "Suyuki", "Ryuguu", "Teke", "Lori", "Koi"};
    vector<Lecturer> lecturers;
    for (int i = 1; i <= 8; ++i) {
        lecturers.push_back(Lecturer(i, names[random(10)]+" "+surnames[random(10)]));
    }

    vector<Course> ACMcourses = { Course("Math", 25, lecturers[0]), Course("Programming", 20, lecturers[1]),
                                  Course("History", 30, lecturers[2]), Course("English", 20, lecturers[3]),
                                  Course("Statistics", 15, lecturers[4])};

    vector<Course> IEEEcourses = { Course("Math", 25, lecturers[5]), Course("Programming", 20, lecturers[6]),
                                   Course("Statistics", 15, lecturers[7])};
    Course dbms;
    cin >> dbms;
    cout << dbms;

    IEEE ieee;
    ACM acm;
    cin >> ieee >> acm;
    cout << ieee << acm;

    Student<ACM> student, student2, student3;
    Student<IEEE> student1, student4, student5;

    cin >> student >> student1;

    student.setCourses(ACMcourses);
    student1.setCourses(IEEEcourses);

    cout << student << student1;

    vector<Student<ACM>> acmstudents = {student, student2, student3};
    vector<Student<IEEE>> ieeestudents = {student1, student4, student5};


    cout << "_____________________________________________________________" << endl;
    cout << "Count() " << count(acmstudents.begin(), acmstudents.end(), student) << endl;


    vector<Student<ACM>>::iterator it = find(acmstudents.begin(), acmstudents.end(), student);
    if (it != acmstudents.end()){
        cout << "Find():\n";
        cout << *it;
    }

    cout << "For_each() " << for_each(acmstudents.begin(), acmstudents.end(), [](Student<ACM> &x){ x.setName("Clever");})<<endl;

    cout << acmstudents[0] << endl;
    cout << "Count_if() " <<count_if(acmstudents.begin(), acmstudents.end(), [](Student<ACM> &x){return x.getName() == "Clever";})<<endl;
}
































