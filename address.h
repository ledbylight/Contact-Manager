#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
#include <iostream>
using namespace std;

class Address {
    private:
        string streetAddress;
        string state;
        string zip;
    public:
        // constructors
        Address();
        Address(const string& streetAddress, const string& state, const string& zip);
        Address(const Address& other);

        // Getters
        string get_streetAddress() const;
        string get_state() const;
        string get_zip() const;

        // Setters
        void set_streetAddress(const string& streetAddress);
        void set_state(const string& state);
        void set_zip(const string& zip);

        void showAddress() const;
    
    // Overloaded operators
    friend ostream& operator<<(ostream& os, const Address& address);
    friend istream& operator>>(istream& is, Address& address);
};
#endif