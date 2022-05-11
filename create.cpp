//
// Created by will on 11/05/22.
//

#include "create.h"
#include <iostream>
#include <fstream>

using namespace create;

void create::Test()
{
    std::cout << "Hello again" << std::endl;
}

void create::Setup()
{
    std::cout << "Name of flashcard: ";
    std::string name;
    std::cin >> name;

    std::cout << "Title of the flashcard: ";
    std::string title;
    std::cin >> title;

    std::cout << "Content of flashcard:" << std::endl;
    std::string content;
    std::cin >> content;

    std::cout << "Creating new flashcard called " << name << ".txt" << std::endl;
    std::ofstream newFile(name + ".txt");
    newFile << title << std::endl << content << std::endl;
    newFile.close();
    std::cout << "Created!" << std::endl;
}