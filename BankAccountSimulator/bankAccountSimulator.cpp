#include <iostream>

double deposit(double balance, double userAmount) {
    return balance + userAmount;
}

double withdraw(double balance, double userAmount) {
    if (userAmount > balance) {
        std::cout << "Error: Insufficient funds!" << std::endl;
        std::cout << "Current Balance: $" << balance << std::endl;
        return balance;
    } else {
        return balance - userAmount;
    }
}

void checkBalance(double balance) {
    std::cout << "\nBalance: $" << balance << std::endl;
}

int main() {
    double userAmount = 0;
    double balance = 0;
    int input;

    std::cout << "Welcome to your Bank App " << std::endl;
    std::cout << "\nStarting Balance: $" << balance << std::endl;

    while (true) {
        std::cout << "\nChoose an option: ";
        std::cout << "\n1) Deposit money";
        std::cout << "\n2) Withdraw  money";
        std::cout << "\n3) Check balance";
        std::cout << "\n4) Exit";

        std::cout << "\nEnter your choice: ";
        std::cin >> input;

        if (input == 1) {
            std::cout << "Enter amount to deposit: ";
            std::cin >> userAmount;

            if (userAmount <= 0) {
                std::cout << "Amount must be positive.\n";
                continue;
            }

            balance = deposit(balance, userAmount);
            std::cout << "\nDeposit successful! \nNew balance: $" << balance << std::endl;

        } else if (input == 2) {
            std::cout << "Enter amount to withdraw: ";
            std::cin >> userAmount;

            if (userAmount <= 0) {
                std::cout << "Amount must be positive.\n";
                continue;
            }

            double oldBalance = balance;
            balance = withdraw(balance, userAmount);

            if (balance != oldBalance) {
                std::cout << "\nWithdrawal successful! \nNew balance: $" << balance << std::endl;
            }


        } else if (input == 3) {
            checkBalance(balance);

        } else if (input == 4) {
            std::cout << "\nThank you for using our Bank App! \nGoodbye." << std::endl;
            break;

        } else {
            std::cout << "\nInput unrecognized. Try Again!" << std::endl;
            continue;
        }
    }
    return 0;
}