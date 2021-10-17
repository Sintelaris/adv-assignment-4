//
// Created by Amira Balkiyaeva on 15.10.2021.
//

#ifndef ASS4_ACM_H
#define ASS4_ACM_H

#include <vector>
#include <string>
#include <map>

using namespace std;

class ACM {
private:
    vector<string> topicOfTheDay = {"Models of computation", "Formal languages and automata theory", "Computational complexity and cryptography",
                               "Theory and algorithms for application domains", "Randomness, geometry and discrete structures"};
    map<string,string> location;
    int numOfPresentations;
public:
    ACM();

    void addTopicOfTheDay(const string&);

    const string & getTopicOfTheDay() const;

    const map<string, string> &getLocation() const;

    void addLocation(const string&, const string&);

    int getNumOfPresentations() const;

    void setNumOfPresentations(int numOfPresentations);

    const int random(int number) const;

    friend ostream &operator<<( ostream &output, const ACM &acm );

    friend istream &operator>>( istream  &input, ACM &acm );

};



#endif //ASS4_ACM_H
