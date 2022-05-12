//
// Created by will on 11/05/22.
//

#include <algorithm>
#include <fstream>
#include <random>
#include "practice.h"
#include "iostream"
#include "filesystem"
#include "vector"

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
        default:
            std::cout << "invalid selection" << std::endl;
            break;
    }

}

void practice::randomorder()
{
    // Randomly select a .txt file from the directory and output the first line of the file.
    std::vector<std::string> files;
    std::string path = "../flashcards/";
    for (auto& entry : std::filesystem::directory_iterator(path)) {
        if (entry.path().extension() == ".txt") {
            files.push_back(entry.path().string());
        }
    }
    std::shuffle(files.begin(), files.end(), std::mt19937(std::random_device()()));
    std::cout << "\033[1;31m" << files[0] << "\033[0m" << std::endl;
    std::ifstream file(files[0]);
    std::string line;
    std::getline(file, line);
    std::cout << line << std::endl;
    file.close();
}