//
// Created by Amira Balkiyaeva on 15.10.2021.
//

#ifndef ASS4_IEEE_H
#define ASS4_IEEE_H

#include <string>
#include <map>
#include <set>

using namespace std;

class IEEE {
private:
    string confName;
    string confLocation;
    set<string> topicsOfPresentations = {"Computer Algorithm", "Computer Design", "Industrial Automation", "Intrusion Detection System",
                                         "IoT Internet of Things"};

public:
    IEEE(){}

    IEEE(const string &confName, const string &confLocation, const set<string> &topicsOfPresentations);

    const string &getConfName() const;

    void setConfName(const string &confName);

    const string &getConfLocation() const;

    void setConfLocation(const string &confLocation);

    const set<string> &getTopicsOfPresentations() const;

    void setTopicsOfPresentations(const set<string> &topicsOfPresentations);

    friend ostream &operator<<( ostream &output, const IEEE &ieee );

    friend istream &operator>>( istream  &input, IEEE &ieee );

};


#endif //ASS4_IEEE_H
