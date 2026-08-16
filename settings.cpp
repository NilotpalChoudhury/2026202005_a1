#include "settings.h"
#include <iostream>
using namespace std;

 void changeLanguage(string language) {
    if (language.empty()) {
        cout << "Please provide a language" << endl;
        return;
    }
    if (language.length() > 20) {
        cout << "Invalid language: name too long." << endl;
        return;
    }
    cout << "Language changed to: " << language << endl;
}

