#include "name.h"
#include "address.h"
#include "contact.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    // Create a contact object using the constructor
    Contact contact;

    cout << "Welcome to the Contact Manager!" << endl;

    // Ask the user if they want to browse contacts, if y then display contacts from the contact.txt file; if n, then skip and ask user if they'd like to add a new contact
    char browseChoice;
    cout << "Do you want to browse contacts? (y/n): ";
    cin >> browseChoice;

    if (browseChoice == 'y') {
        ifstream file("contacts.txt");
        if(file.is_open()) {
            string line;
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        } else {
            cout << "Error opening file" << endl;
        }
    }

    // Ask the user if they want to add a new contact, if y then prompt the user to enter a new contact; if n, then skip and end the program
    cout << "Would you like to add a new contact? (y/n): ";
    char addChoice;
    cin >> addChoice;

    if (addChoice == 'n') {
        return 0;
    }
    cin >> contact;

    // Ask the user if they want to save the contact, if y then save the contact to the contacts.txt file; if n, then skip and end the program
    char saveChoice;
    cout << "Do you want to save this contact? (y/n): ";
    cin >> saveChoice;

    if (saveChoice == 'y') {
        ofstream file("contacts.txt", ios::app);
        if(file.is_open()) {
            file << "\n";
            file << "\n";
            file << contact;
            file << "\n";
            file.close();
            cout << "File saved successfully" << endl; } 
            
            else {
            cout << "Error saving file" << endl;}
    }

    return 0;
}