#ifndef NAME_H
#define NAME_H
#include <string>
#include <iostream>
using namespace std;

class Name {
    private:
        string first_name;
        string middle_name;
        string last_name;
    public:
        // constructors
        Name();
        Name(const string& first_name, const string& middle_name, const string& last_name);
        Name(const Name& other);

        // Getters
        string get_first_name() const;
        string get_middle_name() const;
        string get_last_name() const;

        // Setters
        void set_first_name(const string& first_name);
        void set_middle_name(const string& middle_name);
        void set_last_name(const string& last_name);

        void showName() const;

    // Overloaded operators
    friend ostream& operator<<(ostream& os, const Name& name);
    friend istream& operator>>(istream& is, Name& name);
};
#endif