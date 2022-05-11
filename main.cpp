#include <iostream>
#include "create.h"
#include "view.h"
#include "practice.h"

using namespace create;

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "What would you like to do?" << std::endl;
    int selection;

    std::cout << "[1] Create new flashcards" << std::endl; // create.cpp
    std::cout << "[2] View all flashcards" << std::endl; // view.cpp
    std::cout << "[3] Practice against myself" << std::endl; // practice.cpp

    std::cout << "Please select a value by its number:";
    std::cin >> selection;

    switch (selection) {
        case 1:
            create::Test();
            break;
        case 2:
            break;
        case 3:
            break;
    }

    return 0;
}
