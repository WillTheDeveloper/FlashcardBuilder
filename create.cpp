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

    // Slug the name if it has spaces
    std::string slug = name;
    for (char & i : slug)
    {
        if (i == ' ')
        {
            i = '-';
        }
    }

    std::cout << "Creating new flashcard called " << slug << ".txt" << std::endl;
    std::ofstream newFile("../flashcards/" + slug + ".txt");
    newFile << title << std::endl << content << std::endl;
    newFile.close();
    std::cout << "Created!" << std::endl;

    // Generate an image with a name of the flashcard in red and the content in green in the center under the title
    std::cout << "Generating image..." << std::endl;
    std::string image = "../flashcards/" + slug + ".png";
    std::string command = "convert -size 500x500 xc:black -fill red -pointsize 50 -draw \"text 200,200 '" + title + "'\" -fill green -pointsize 50 -draw \"text 200,300 '" + content + "'\" " + image;
    system(command.c_str());
    std::cout << "Image generated!" << std::endl;

}