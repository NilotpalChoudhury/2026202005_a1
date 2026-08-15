#include "login.h"
#include <iostream>
using namespace std;

void login(string username, string password) {
    if (!isValidUsername(username)) {
        cout << "Login failed: invalid username." << endl;
        return;
    }
    if (password.length() < 6) {
        cout << "Login failed: password too short." << endl;
        return;
    }
    cout << "Login successful for user: " << username << endl;
}
