#include <iostream>
#include <string>
#include <limits>

// Helper function to ensure we get a valid number from the user
double getNumber(const std::string& prompt) {
    double value;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value) {
            return value;
        } else {
            std::cout << "Invalid input! Please enter a numeric value.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    return a / b;
}

int main() {
    double a, b, result = 0;
    std::string op;

    std::cout << "Welcome to the Calculator app!\n";
    std::cout << "Enter 'q' as the operator to quit.\n\n";

    while (true) {
        std::cout << "Choose operation (+, -, *, /) or q to quit: ";
        std::cin >> op;

        if (op == "q") {
            std::cout << "Goodbye!\n";
            break;
        }

        // New helper function for both numbers
        a = getNumber("Enter first number: ");
        b = getNumber("Enter second number: ");

        if (op == "+") {
            result = add(a, b);
        } else if (op == "-") {
            result = subtract(a, b);
        } else if (op == "*") {
            result = multiply(a, b);
        } else if (op == "/") {
            if (b == 0) {
                std::cout << "Error: Cannot divide by zero.\n";
                continue;
            }
            result = divide(a, b);
        } else {
            std::cout << "Invalid operator!" << std::endl;
            continue;
        }

        std::cout << "Result: " << result << "\n\n";
    }

    return 0;
}