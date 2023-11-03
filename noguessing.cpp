#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int lowerBound = 1; // Set the lower bound for the random number
    int upperBound = 100; // Set the upper bound for the random number
    int secretNumber = std::rand() % (upperBound - lowerBound + 1) + lowerBound; // Generate a random number between lowerBound and upperBound

    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I'm thinking of a number between " << lowerBound << " and " << upperBound << ". Can you guess it?\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number (" << secretNumber << ") in " << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);

    return 0;
}
