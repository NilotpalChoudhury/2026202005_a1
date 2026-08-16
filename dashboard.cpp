#include "dashboard.h"
#include <iostream>
using namespace std;

double averageGrade(double grade1, double grade2, double grade3) {
    double sum = grade1 + grade2 + grade3;
    double avg = sum/3;
    cout << "Average grade : "<<avg<<endl;
    return avg;
}
