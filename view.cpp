//
// Created by will on 11/05/22.
//

#include "view.h"
#include "iostream"
#include "fstream"
#include "filesystem"

using namespace view;


void view::list()
{
    std::cout << "Listing first line of each .txt file in the current directory:" << std::endl;
    for (const auto &entry : std::filesystem::directory_iterator("../flashcards"))
    {
        if (entry.path().extension() == ".txt")
        {
            std::ifstream file(entry.path());
            std::string line;
            std::getline(file, line);
            std::cout << line << std::endl;
        }
    }
}