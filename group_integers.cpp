// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Oct 2021
// This program checks if the input is an odd number or even number

#include <iostream>

int main() {
    // this function checks for the random number
    int user_input_as_int;
    std::string user_input;

    // input
    std::cout << "Enter any positive integer: ";
    std::cin >> user_input;
    std::cout << "" << std::endl;

    // process and output
    try {
        user_input_as_int = std::stoi(user_input);
        if (user_input_as_int % 2 == 0) {
            std::cout << user_input << " is an even number." << std::endl;
            std::cout << "" << std::endl;
        } else if (user_input_as_int % 2 == 1) {
            std::cout << user_input << " is an odd number." << std::endl;
            std::cout << "" << std::endl;
        }
    }
    catch (std::invalid_argument) {
        std::cout << user_input << " is not an integer, try again."
                    << std::endl;
        std::cout << "" << std::endl;
    }
    std::cout << "Thanks for checking." << std::endl;

    std::cout << "\nDone." << std::endl;
}
