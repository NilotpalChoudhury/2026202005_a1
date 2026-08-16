#include "profile.h"
#include <iostream>
using namespace std;

void printProfile(string name, int rollNumber) {
   if (name.empty()) {
        cout << "Profile unavailable: name not set." << endl;
        return;
    }
    cout << "Profile details:" << endl;
    cout << "Name: "<<name<<endl;
    cout<<"Roll Number: "<< rollNumber<<endl;
}
