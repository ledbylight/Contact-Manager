#include "address.h"
#include <iostream>
using namespace std;

Address::Address(const string& streetAddress, const string& state, const string& zip) {
    this->streetAddress = streetAddress;
    this->state = state;
    this->zip = zip;
}

Address::Address(): streetAddress(""), state(""), zip("") {}

Address::Address(const Address& other) {
    streetAddress = other.streetAddress;
    state = other.state;
    zip = other.zip;
}

// Getters
string Address::get_streetAddress() const {
    return streetAddress;
}
string Address::get_state() const {
    return state;
}
string Address::get_zip() const {
    return zip;
}

// Setters
void Address::set_streetAddress(const string& streetAddress) {
    this->streetAddress = streetAddress;
}
void Address::set_state(const string& state) {
    this->state = state;
}
void Address::set_zip(const string& zip) {
    this->zip = zip;
}

// Show address
void Address::showAddress() const {
    cout << streetAddress << "\n";
    cout << state << " " << zip << endl;
}

// Overloaded operators
ostream& operator<<(ostream& os, const Address& address) {
    os << address.streetAddress << "\n" << address.state << " " << address.zip << endl;
    return os;
}
istream& operator>>(istream& is, Address& address) {
    cin.ignore();

    cout << "Enter street address: ";
    getline(is, address.streetAddress);
    cout << "Enter state: ";
    getline(is, address.state);
    cout << "Enter zip: ";
    getline(is, address.zip);
    return is;
}