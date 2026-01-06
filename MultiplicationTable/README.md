# Multiplication Table Generator (C++)

This is a simple C++ console application that generates a multiplication table for a number entered by the user.
After displaying the table, the program asks whether the user wants to generate another one and validates input to ensure only valid choices are accepted.

## Features
- Generates a multiplication table from 1 to 10
- Repeats the program based on user choice
- Validates user input to allow only y or n 
- Clean and beginner-friendly logic

## How It Works

1. The user enters a number.
2. The program prints the multiplication table for that number.
3. The user is prompted to generate another table:
   - y -> generate another table
   - n -> exit the program
4. Any invalid input is rejected until a valid choice is entered.

## How to Run
Compile:  
`g++ main.cpp -o multiplication_table`

Run:  
`./multiplication_table`

## Future Improvements

Allow custom table ranges (e.g., 1–20)

Support uppercase input (Y / N)

Validate numeric input for the entered number