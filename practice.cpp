//
// Created by will on 11/05/22.
//

#include "practice.h"
#include "iostream"
#include "filesystem"

using namespace practice;

void practice::menu()
{
    std::cout << "How would you like to practice?" << std::endl;
    int select;

    std::cout << "[1] Compare your response to the card at random." << std::endl;
    std::cout << "[2] Random select a card and see what it says" << std::endl;

    std::cout << "Select a option: ";
    std::cin >> select;

    switch (select) {
        case 1:
            randomorder();
            break;
        case 2:
            std::cout << "coming soon" << std::endl;
            break;
    }

}

void practice::randomorder()
{

}