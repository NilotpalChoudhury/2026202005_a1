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

int displayMenu() {
    int choice;

    cout << "\n===== Student Portal Menu =====" << endl;
    cout << "1. Profile" << endl;
    cout << "2. Dashboard" << endl;
    cout << "3. Settings" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    return choice;
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
   
        int choice = displayMenu();
        switch (choice)
	{
        case 1: 
  	     {
            string name;
            int rollNumber;

            cout << "\nEnter your full name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter your roll number: ";
            cin >> rollNumber;

            printProfile(name, rollNumber);
            break;
            }
 	case 2: {
            double grade1, grade2, grade3;

            cout << "Enter three grades: ";
            cin >> grade1 >> grade2 >> grade3;

            averageGrade(grade1, grade2, grade3);
            break;
             }

        case 3: {
            string language;

            cout << "Enter preferred language: ";
            cin >> language;

            changeLanguage(language);
            break;
         	}

        default:
            cout << "Invalid choice." << endl;
    	}

    cout << "Program finished successfully." << endl;
    return 0;
}
//temporary comment
