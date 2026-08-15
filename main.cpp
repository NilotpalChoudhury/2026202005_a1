#include <iostream>
#include <string>
#include "utils.h"

void printWelcomeMessage() {
    std::cout << "      Welcome to Git !       " << std::endl;
}


void greetUser() {
    std::cout << "Hello, Developer!" << std::endl;
}

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    printWelcomeMessage();
    greetUser();

    int num1 = 5;
    int num2 = 10;
    int result = addNumbers(num1, num2);

    std::string testUser = "ni lo";
    if (isValidUsername(testUser)) {
        std::cout << "Username is valid." << std::endl;
    } else {
        std::cout << "Username is invalid." << std::endl;
    }

    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << result << std::endl;
    std::cout << "Program finished successfully." << std::endl;   

    return 0;
}
