#include <iostream>
#include <random>
#include <limits>
#include <string>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());

    int numDice = 0;
    int sides = 0;
    char choice = 'y';

    std::cout << "Welcome to the Dice Rolling Simulator!\n";

    while (choice == 'y') {
        std::cout << "\nHow many dice would you like to roll? ";

        if (!(std::cin >> numDice)) {
            std::cout << "Invalid input. Please enter a whole number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        std::cout << "How many sides per die? ";
        if (!(std::cin >> sides)) {
            std::cout << "Invalid input. Please enter a whole number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (numDice <= 0 || sides <= 0) {
            std::cout << "Values must be positive.\n";
            continue;
        }

        std::uniform_int_distribution<int> distr(1, sides);
        int total = 0;

        std::cout << "\nRolling...\n";

        for (int i = 1; i <= numDice; i++) {
            int roll = distr(gen);
            std::cout << "Die " << i << ": " << roll << std::endl;
            total += roll;
        }

        std::cout << "\nTotal: " << total << std::endl;

        std::cout << "\nRoll again? (y/n): ";
        std::cin >> choice;
    }

    std::cout << "\nGoodbye!\n";
    return 0;
}