#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    srand(time(nullptr));

    int numDice = 0;
    int sides = 0;
    char choice = 'y';

    std::cout << "Welcome to the Dice Rolling Simulator!\n";

    while (choice == 'y') {
        std::cout << "\nHow many dice would you like to roll? ";
        std::cin >> numDice;

        std::cout << "How many sides per die? ";
        std::cin >> sides;

        if (numDice <= 0 || sides <= 0) {
            std::cout << "Values must be positive.\n";
            continue;
        }

        int total = 0;

        std::cout << "\nRolling...\n";

        for (int i = 1; i <= numDice; i++) {
            int roll = (rand() % sides) + 1;
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
