#include <iostream>
#include <limits>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int wins = 0;
    int losses = 0;
    int ties = 0;

    while (true) {
        std::cout << "\nRock Paper Scissors\n" << "1) Rock\n"
                  << "2) Paper\n"
                  << "3) Scissors\n"
                  << "4) Quit\n"
                  << "Your choice: ";

        int userChoice;
        if (!(std::cin >> userChoice)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        if (userChoice == 4) {
            break;
        }

        if (userChoice < 1 || userChoice > 3) {
            std::cout << "Out of range. Choose 1, 2, 3, or 4.\n";
            continue;
        }

        int cpuChoice = std::rand() % 3 + 1;

        auto toName = [](int choice) -> const char* {
            switch (choice) {
                case 1: return "Rock";
                case 2: return "Paper";
                case 3: return "Scissors";
                default: return "Unknown";
            }
        };

        std::cout << "You chose: " << toName(userChoice) << "\n";
        std::cout << "CPU chose: " << toName(cpuChoice) << "\n";

        if (userChoice == cpuChoice) {
            std::cout << "Tie!\n";
            ties++;
        } else if (
            (userChoice == 1 && cpuChoice == 3) || // Rock beats Scissors
            (userChoice == 2 && cpuChoice == 1) || // Paper beats Rock
            (userChoice == 3 && cpuChoice == 2)    // Scissors beats Paper
        ) {
            std::cout << "You win!\n";
            wins++;
        } else {
            std::cout << "You lose!\n";
            losses++;
        }

        std::cout << "Score: " << wins << "W / " << losses << "L / " << ties << "T\n";
    }

    std::cout << "\nFinal Score: " << wins << "W / " << losses << "L / " << ties << "T\n";
    std::cout << "Thanks for playing!\n";
    return 0;
}