#include <iostream>
#include <string>
#include "utils.h"
using namespace std;

void printWelcomeMessage() {
    cout << "Welcome to Git !" << endl;
}

void greetUser() {
    cout << "Hello, Developer!" << endl;
}

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    printWelcomeMessage();
    greetUser();

    string username;
    cout << "Enter your username: ";
    cin >> username;

    if (isValidUsername(username)) {
        cout << "Username is valid." << endl;
    } else {
        cout << "Username is invalid." << endl;
    }

    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int result = addNumbers(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    cout << "Program finished successfully." << endl;
    return 0;
}
