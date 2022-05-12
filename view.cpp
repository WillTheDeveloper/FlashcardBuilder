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
    bool has_flashcards = false;

    for (const auto &entry : std::filesystem::directory_iterator("../flashcards"))
    {
        int i = 1;

        if (entry.path().extension() == ".txt")
        {
            std::cout << "[" << i << "]: ";
            i++;
            std::ifstream file(entry.path());
            std::string line;
            std::getline(file, line);
            std::cout << line << " ";

            std::cout << "\033[1;31m";
            std::cout << "("  << entry.path().filename() << ")" << std::endl;
            std::cout << "\033[0m";
        }

        if (i == 1)
        {
            std::cout << "No flashcards found" << std::endl;
        }
        else
        {
            has_flashcards = true;
        }


        if (has_flashcards)
        {
            std::cout << "Enter the number of the file you want to view: ";
            int file_number;
            std::cin >> file_number;
        }
    }

}
