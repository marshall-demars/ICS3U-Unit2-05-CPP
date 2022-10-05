// Copyright (c) 2022 Marshall Demars All rights reserved
//
// Created by: Marshall Demars
// Created on: October 2022
// This program calculates circumference of a circle with user input

#include <iostream>

// global variable
int variableX = 25;


void localVariable() {
    // this shows what happens with global variables

    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: "
    << variableX << "+" << variableY << "=" << variableZ << std::endl;
}


void globalVariable() {
    // this shows what happens with global variables

    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Global variableX, variableY, variableZ: "
    << variableX << "+" << variableY << "=" << variableZ << std::endl;
}
int main() {
    // this function calls local and global

    localVariable();
    globalVariable();
}
