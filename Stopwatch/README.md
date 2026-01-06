# ⏱️ CLI Stopwatch (C++)

A command-line stopwatch application written in C++ using the standard `<chrono>` library.

This project was built to practice working with time measurement, loops, state management, and basic multithreading in a console-based environment.


## Features
- Start a stopwatch that updates live in the terminal
- Display elapsed time in seconds
- Stop the timer by pressing **ENTER**
- Reset the stopwatch
- Menu-driven CLI interface

## Concepts Used
- `<chrono>` for time measurement
- `steady_clock`, `time_point`, and `duration`
- Loops and conditional logic
- State management (`running`, elapsed time)
- Basic multithreading (`std::thread`, `std::atomic`)
- Same-line console output using `\r` and `flush()`

## How to Run

**Important:** This program must be run in a real terminal (not an IDE run/debug console).

### Compile
`g++ stopwatch.cpp -o stopwatch`

## Run
`./stopwatch`

## Notes
- The ENTER-to-stop behavior is used to avoid platform-specific keyboard input hacks
- This approach works reliably in standard terminals and CLion’s Terminal tab
- The stopwatch accumulates time across multiple start/stop cycles unless reset

## Purpose

This mini project is part of my C++ learning journey and focuses on understanding time handling, real-time console output, and basic concurrency while keeping the program simple and self-contained.