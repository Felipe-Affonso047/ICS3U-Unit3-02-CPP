// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: April 2021
// This program  is a guessing number game

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    float number;

    std::cout << "Try to guess a number from 0 to 9:" << std::endl;

    std::cin >> number;

    if (number == 5) {
        std::cout << "\nCongratulations, guessed right!" << std::endl;
    }

    if (number != 5) {
        std::cout << "\nSorry, guessed wrong!" << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
