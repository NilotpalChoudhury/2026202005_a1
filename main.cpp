#include <iostream>
#include <string>
#include "utils.h"
#include "login.h"
#include "profile.h"
#include "dashboard.h"
#include "settings.h"

using namespace std;

void printWelcomeMessage() {
    cout << "Welcome to Git !" << endl;
}

void greetUser() {
    cout << "Hello, Developer!" << endl;
}

int main() {
    printWelcomeMessage();
    greetUser();

    string username, password;
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    login(username, password);

    string name;
    int rollNumber;
    cout << "Enter your full name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your roll number: ";
    cin >> rollNumber;

    printProfile(name, rollNumber);

    double grade1, grade2, grade3;
    cout << "Enter three grades: ";
    cin >> grade1 >> grade2 >> grade3;

    averageGrade(grade1, grade2, grade3);

    string language;
    cout << "Enter preferred language: ";
    cin >> language;

    changeLanguage(language);

    cout << "Program finished successfully." << endl;
    return 0;
}
