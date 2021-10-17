//
// Created by Amira Balkiyaeva on 15.10.2021.
//

#include "ACM.h"
#include <iostream>
#include <ctime>

ACM::ACM() {
    location.insert(pair<string, string>("New York", "1601 Broadway"));
    location.insert(pair<string, string>("Beijing", "Tsinghua University"));
    location.insert(pair<string, string>("Maharashtra", "Senapati Bapat Road"));
    numOfPresentations = random(25);

}

void ACM::addTopicOfTheDay(const string & value) {
    topicOfTheDay.push_back(value);
}

const string & ACM::getTopicOfTheDay() const {
    int rand = random(topicOfTheDay.size());
    return topicOfTheDay[rand];
}

void ACM::addLocation(const string& key, const string& value){
    location.insert(pair<string,string>(key, value));
}


const map<string, string> &ACM::getLocation() const {
    return location;
}

int ACM::getNumOfPresentations() const {
    return numOfPresentations;
}

void ACM::setNumOfPresentations(int numOfPresentations) {
    ACM::numOfPresentations = numOfPresentations;
}

const int ACM::random(int number) const {
    srand(time(NULL));
    return rand()%number;
}

ostream &operator<<( ostream &output, const ACM &acm ) {
    cout << "\nACM:";
    output << "\nTopic of the day: " << acm.getTopicOfTheDay() << "\nNumber of presentations: " << acm.getNumOfPresentations() << " \nLocation: \n";
    for(auto it = acm.location.begin(); it != acm.location.end(); it++){
        output <<" \t";
        output << "\t" << it->first << " – " << it->second << "\n";
    }
    return output;
}

istream &operator>>( istream  &input, ACM &acm ) {
    cout << "\nACM:";
    cout << "\nInput the number of presentations";
    input >> acm.numOfPresentations;
    return input;
}
