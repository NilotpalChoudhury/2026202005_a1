#include "utils.h"
#include <iostream>
using namespace std;

bool isValidUsername(string username) {
    if (username.length() < 3) {
        return false;
    }
    return true;
}
