#include <iostream>
#include <string>

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
    double a;
    double b;
    double result = 0;
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

        std::cout << "Enter first number: ";
        std::cin >> a;

        std::cout << "Enter second number: ";
        std::cin >> b;

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
            std::cout << "Invalid input!" << std::endl;
            continue;
        }

        std::cout << "Result: " << result << "\n\n";
    }

    return 0;
}