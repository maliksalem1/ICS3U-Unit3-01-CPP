// Copyright (c) 2022 maliksalem1
//
// Created by: maliksalem1
// Created on: Oct 2022
// This program adds two integers

#include <iostream>

int main() {
    // This function calculates a total of two integers
    int integer1;
    int integer2;
    int total;

    // Input
    std::cout << "Enter the first number to add (integer): ";
    std::cin >> integer1;
    std::cout << "Enter second number to add (integer): ";
    std::cin >> integer2;

    // Process
    total = integer1 + integer2;

    // Output
    std::cout << "" << std::endl;
    std::cout << "" << integer1 << "+" << "" << integer2 << "="
     << total << std::endl;

    std::cout << "\nDone." << std::endl;
}
