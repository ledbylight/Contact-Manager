#include "contact.h"
#include <iostream>
using namespace std;

Contact::Contact(const Name& name, const Address& address, const string& phone_number) {
    this->name = name;
    this->address = address;
    this->phone_number = phone_number;
}

Contact::Contact(): name(Name()), address(Address()), phone_number("") {}

Contact::Contact(const Contact& other) {
    name = other.name;
    address = other.address;
    phone_number = other.phone_number;
}

// Getters
Name Contact::get_name() const {
    return name;
}
Address Contact::get_address() const {
    return address;
}
string Contact::get_phone_number() const {
    return phone_number;
}

// Setters
void Contact::set_name(const Name& name) {
    this->name = name;
}
void Contact::set_address(const Address& address) {
    this->address = address;
}
void Contact::set_phone_number(const string& phone_number) {
    this->phone_number = phone_number;
}

// Show contact
void Contact::showContact() const {
    name.showName();
    address.showAddress();
    cout << phone_number << "\n" << endl;
}

// Overloaded operators
ostream& operator<<(ostream& os, const Contact& contact) {
    os << contact.name << contact.address << contact.phone_number << "\n";
    return os;
}
istream& operator>>(istream& is, Contact& contact) {
    is >> contact.name >> contact.address;
    cout << "Enter phone number: ";
    is >> contact.phone_number;
    return is;
}