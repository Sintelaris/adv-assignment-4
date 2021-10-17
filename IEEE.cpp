//
// Created by Amira Balkiyaeva on 15.10.2021.
//

#include "IEEE.h"
#include <iostream>

IEEE::IEEE(const string &confName, const string &confLocation, const set<string> &topicsOfPresentations)
        : confName(confName), confLocation(confLocation), topicsOfPresentations(topicsOfPresentations) {}

const string &IEEE::getConfName() const {
    return confName;
}

void IEEE::setConfName(const string &confName) {
    IEEE::confName = confName;
}

const string &IEEE::getConfLocation() const {
    return confLocation;
}

void IEEE::setConfLocation(const string &confLocation) {
    IEEE::confLocation = confLocation;
}

const set<string> &IEEE::getTopicsOfPresentations() const {
    return topicsOfPresentations;
}

void IEEE::setTopicsOfPresentations(const set<string> &topicsOfPresentations) {
    IEEE::topicsOfPresentations = topicsOfPresentations;
}

ostream &operator<<( ostream &output, const IEEE &ieee ) {
    cout << "\nIEEE:";
    output << "\nConference name: " << ieee.getConfName() << "\nConference Location: " << ieee.getConfLocation() << " \nTopics of presentations: \n";
    for(auto it = ieee.topicsOfPresentations.begin(); it != ieee.topicsOfPresentations.end(); it++){
        output <<" \t";
        output << "\t" << it->data() << "\n";
    }
    return output;
}

istream &operator>>( istream  &input, IEEE &ieee ) {
    cout << "\nIEEE:";
    cout << "\nInput the conference name and location";
    input >> ieee.confName >> ieee.confLocation;
    return input;
}
