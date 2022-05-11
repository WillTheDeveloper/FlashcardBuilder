#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "What would you like to do?" << std::endl;
    int selection;

    std::cout << "[1] Create new flashcards" << std::endl;
    std::cout << "[2] View all flashcards" << std::endl;
    std::cout << "[3] Practice against myself" << std::endl;

    std::cout << "Please select a value by its number:";
    std::cin >> selection;

    return 0;
}
