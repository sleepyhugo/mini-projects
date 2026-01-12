# 🎲 Dice Rolling Simulator (C++)

A robust, modern command-line dice rolling simulator. 
This project has been updated to utilize modern C++ `<random>` libraries and implements fail-safe input handling to ensure a smooth user experience.

## Features
- **Modern PRNG:** Uses the Mersenne Twister engine (`std::mt19937`) for high-quality, non-deterministic randomness.
- **Robust Validation:** Handles "garbage" input (like strings or symbols) without crashing or entering infinite loops.
- **Dynamic Input:** Choose any number of dice and any number of sides per die.
- **Session Persistence:** Roll multiple times within a single execution without needing to restart the app.

## Concepts Used
- **Modern Randomness:** Implementation of `<random>`, `std::random_device`, and `std::uniform_int_distribution`.
- **Input Stream Management:** Using `std::cin.clear()` and `std::cin.ignore()` to manage the input buffer and recover from extraction errors.
- **Flow Control:** Utilizing `while` loops for session management and `for` loops for dice iteration.
- **Memory Safety:** Avoiding legacy C-style functions in favor of type-safe C++ alternatives.

## ️ How to Run

### Compile
Ensure you have a C++11 compliant compiler (or newer) installed:

`g++ diceRollingSimulator.cpp -o dice.exe`

### Run
`./dice.exe`

## Evolution of the Project
This project originally started with basic rand() and srand() logic. It was refactored to use the C++11 <random> library to ensure better statistical distribution of dice rolls. 
Additionally, professional-grade input validation was added to handle unexpected user behavior, making the application more resilient.