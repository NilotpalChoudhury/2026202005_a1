#include "login.h"
#include <iostream>
using namespace std;

void login(string username, string password) {
    if (!validateUsername(username)) {
        cout << "Login failed: invalid username." << endl;
        return;
    }
    cout << "Login successful for user: " << username << endl;
}
