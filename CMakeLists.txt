cmake_minimum_required(VERSION 3.22)
project(FlashcardBuilder)

set(CMAKE_CXX_STANDARD 14)

add_executable(FlashcardBuilder main.cpp create.cpp create.h view.cpp view.h practice.cpp practice.h)
