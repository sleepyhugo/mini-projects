# Battleship CLI Game (C++)

A simple **command-line Battleship game** written in C++ to practice **multidimensional arrays**, input validation, and basic game logic.

The game uses a 4×4 grid with randomly placed ships. The player guesses coordinates until all ships are hit, with the board updating after each turn.


## How the Game Works

- The board is a **4×4 grid**
- **4 ships** are placed randomly (hidden)
- You enter a **row and column** to attack
- The game shows:
    - `.` → Unknown
    - `O` → Miss
    - `X` → Hit
- The game ends when all ships are hit

## What This Project Practices

- Multidimensional arrays (2D arrays)
- Input validation (preventing crashes)
- Random number generation
- Functions and code organization
- Game state tracking (hits, turns, guesses)
- Command-line user interaction

## Tech Stack

- **Language:** C++
- **Compiler:** g++
- **Environment:** CLI / Terminal

## How to Run

### Compile
`g++ battleship.cpp -o battleship`

### Run

`./battleship`

### Windows

`battleship.exe`

## Why This Project

This project was built as a learning exercise while studying C++, focusing on understanding how multidimensional arrays work in a practical and interactive way.