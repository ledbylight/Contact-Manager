#include "name.h"
#include <iostream>
using namespace std;

Name::Name(const string& first_name, const string& middle_name, const string& last_name) {
    this->first_name = first_name;
    this->middle_name = middle_name;
    this->last_name = last_name;
}

Name::Name(): first_name(""), middle_name(""), last_name("") {}

Name::Name(const Name& other) {
    first_name = other.first_name;
    middle_name = other.middle_name;
    last_name = other.last_name;
}

// Getters
string Name::get_first_name() const {
    return first_name;
}
string Name::get_middle_name() const {
    return middle_name;
}
string Name::get_last_name() const {
    return last_name;
}

// Setters
void Name::set_first_name(const string& first_name) {
    this->first_name = first_name;
}
void Name::set_middle_name(const string& middle_name) {
    this->middle_name = middle_name;
}
void Name::set_last_name(const string& last_name) {
    this->last_name = last_name;
}

// Show name
void Name::showName() const {
    cout << last_name << ", " << first_name << " " << middle_name << endl;
}

// Overloaded operators
ostream& operator<<(ostream& os, const Name& name) {
    os << name.last_name << ", " << name.first_name << " " << name.middle_name << endl;
    return os;
}
istream& operator>>(istream& is, Name& name) {
    cout << "Enter first name: ";
    is >> name.first_name;
    cout << "Enter middle name: ";
    is >> name.middle_name;
    cout << "Enter last name: ";
    is >> name.last_name;
    return is;
}