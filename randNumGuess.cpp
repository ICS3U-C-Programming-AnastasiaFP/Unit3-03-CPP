// Copyright 2023 Anastasia Friedenstein Patino
// Created on : October.18, 2023
// Guessing game of numbers 1 to 9

#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 9
    int random_number = std::rand() % 9 + 1;

    // Get the user's guess
    int guess;
    std::cout << "Enter your guess: ";
    std::cin >> guess;

    // Check if the guess is correct
    if (guess == random_number) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        std::cout << "You guessed wrong.The correct answer was:" << random_number << std::endl;
    }

    return 0;
}
