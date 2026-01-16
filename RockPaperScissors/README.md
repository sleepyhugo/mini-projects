# Rock Paper Scissors (CLI)

A robust command-line implementation of the classic Rock Paper Scissors game. This project focuses on handling user input safely and managing game state through multiple rounds.

## Features
* **Persistent Score Tracking:** Keeps track of Wins, Losses, and Ties during a single session.
* **Input Validation:** Robust error handling that prevents the program from crashing if a user enters non-numeric characters or out-of-range numbers.
* **Randomized AI:** Uses a time-seeded random number generator to ensure unique CPU moves every game.
* **Clean UI:** A simple, repeating menu system for a seamless gameplay experience.

## Concepts Covered
* **Input Sanitization:** Utilizing `std::cin.clear()` and `std::cin.ignore()` to handle invalid data types and prevent infinite loops.
* **Lambda Functions:** Implementation of a lambda (`toName`) for efficient, localized mapping of integers to string labels.
* **Randomness:** Seeding with `std::time` and using `std::rand` with the modulo operator for CPU decision logic.
* **Control Flow:** Use of `while(true)` loops for game persistence and complex boolean logic for win/loss conditions.
* **Limits Library:** Using `std::numeric_limits` to precisely clear the input buffer.

## How to Run
1.  Navigate to the project directory.
2.  Compile the program using a C++ compiler (like g++):
    ```bash
    g++ main.cpp -o RockPaperScissors
    ```
3.  Run the executable:
    ```bash
    ./RockPaperScissors
    ```

## Gameplay Instructions
* Enter **1** for Rock.
* Enter **2** for Paper.
* Enter **3** for Scissors.
* Enter **4** to quit the game and see your final score.