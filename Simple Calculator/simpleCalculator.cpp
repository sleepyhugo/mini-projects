#include <iostream>
#include <string>
#include <limits>

double getNumber(const std::string& prompt) {
    double value;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value) return value;
        std::cout << "Invalid input! Please enter a numeric value.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
    std::cout << "Enter 'q' to quit.\n\n";

    while (true) {
        std::cout << "Choose operation (+, -, *, /) or q to quit: ";
        std::cin >> op;

        if (op == "q") {
            std::cout << "Goodbye!\n";
            break;
        }

        a = getNumber("Enter first number: ");
        b = getNumber("Enter second number: ");

        char operation = op[0];

        switch (operation) {
            case '+':
                result = add(a, b);
                break;
            case '-':
                result = subtract(a, b);
                break;
            case '*':
                result = multiply(a, b);
                break;
            case '/':
                if (b == 0) {
                    std::cout << "Error: Cannot divide by zero.\n\n";
                    continue;
                }
                result = divide(a, b);
                break;
            default:
                std::cout << "Invalid operator! Try again.\n\n";
                continue;
        }

        std::cout << "Result: " << result << "\n\n";
    }

    return 0;
}