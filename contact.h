#ifndef CONTACT_H
#define CONTACT_H
#include <string>
#include <iostream>
#include "name.h"
#include "address.h"
using namespace std;

class Contact {
    private:
        Name name;
        Address address;
        string phone_number;
    public:
        // constructors
        Contact();
        Contact(const Name& name, const Address& address, const string& phone_number);
        Contact(const Contact& other);

        // Getters
        Name get_name() const;
        Address get_address() const;
        string get_phone_number() const;

        // Setters
        void set_name(const Name& name);
        void set_address(const Address& address);
        void set_phone_number(const string& phone_number);

        void showContact() const;
    
    // Overloaded operators
    friend ostream& operator<<(ostream& os, const Contact& contact);
    friend istream& operator>>(istream& is, Contact& contact);
};
#endif
