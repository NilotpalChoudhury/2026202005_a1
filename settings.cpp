#include "settings.h"
#include <iostream>
using namespace std;

 void changeLanguage(string language) {
    if (language.empty()) {
        cout << "Invalid language: cannot be empty." << endl;
        return;
    }
    if (language.length() > 20) {
        cout << "Invalid language: name too long." << endl;
        return;
    }
    cout << "Language changed to: " << language << endl;
}

