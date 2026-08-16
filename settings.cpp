#include "settings.h"
#include <iostream>
using namespace std;

 void changeLanguage(string language) {
    cout << "Language changed to: " << language << endl;
    if (language.empty()) {
        cout << "Invalid language: cannot be empty." << endl;
        return;
    }
}

