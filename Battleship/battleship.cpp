#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

const int SIZE = 4;
const int TOTAL_SHIPS = 4;

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int getNumberInRange(const string& prompt, int min, int max) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail()) {
            clearInput();
            cout << "Please enter a number.\n";
            continue;
        }

        if (value < min || value > max) {
            cout << "Enter a number between " << min << " and " << max << ".\n";
            continue;
        }

        return value;
    }
}

void printBoard(const char board[SIZE][SIZE]) {
    cout << "\n   ";
    for (int c = 0; c < SIZE; c++) cout << c << " ";
    cout << "\n";

    for (int r = 0; r < SIZE; r++) {
        cout << r << "  ";
        for (int c = 0; c < SIZE; c++) {
            cout << board[r][c] << " ";
        }
        cout << "\n";
    }
    cout << "\nLegend: . = unknown, O = miss, X = hit\n\n";
}

void placeRandomShips(bool ships[SIZE][SIZE]) {
    // set all to false
    for (int r = 0; r < SIZE; r++)
        for (int c = 0; c < SIZE; c++)
            ships[r][c] = false;

    int placed = 0;
    while (placed < TOTAL_SHIPS) {
        int r = rand() % SIZE;
        int c = rand() % SIZE;

        if (!ships[r][c]) {
            ships[r][c] = true;
            placed++;
        }
    }
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    bool ships[SIZE][SIZE];
    bool guessed[SIZE][SIZE] = {}; // false by default
    char board[SIZE][SIZE];

    // fill display board with unknowns
    for (int r = 0; r < SIZE; r++)
        for (int c = 0; c < SIZE; c++)
            board[r][c] = '.';

    placeRandomShips(ships);

    int hits = 0;
    int turns = 0;

    cout << "=== Mini Battleship ===\n";
    cout << "Find all " << TOTAL_SHIPS << " ships on a " << SIZE << "x" << SIZE << " grid.\n";

    while (hits < TOTAL_SHIPS) {
        printBoard(board);

        int row = getNumberInRange("Choose a row (0-3): ", 0, SIZE - 1);
        int col = getNumberInRange("Choose a col (0-3): ", 0, SIZE - 1);

        if (guessed[row][col]) {
            cout << "You already tried (" << row << ", " << col << "). Pick a new spot.\n\n";
            continue; // don't count as a turn
        }

        guessed[row][col] = true;
        turns++;

        if (ships[row][col]) {
            board[row][col] = 'X';
            hits++;
            cout << "Hit! Ships left: " << (TOTAL_SHIPS - hits) << "\n\n";
        } else {
            board[row][col] = 'O';
            cout << "Miss!\n\n";
        }
    }

    printBoard(board);
    cout << "Victory! You won in " << turns << " turns.\n";

    return 0;
}
