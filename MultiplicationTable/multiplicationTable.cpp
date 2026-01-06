#include <iostream>
using namespace std;

int main() {
    int number;
    char generate = 'y';

    while (generate == 'y') {

        cout << "Enter a number: ";
        cin >> number;

        cout << "\nMultiplication Table for " << number << ":\n";
        cout << "----------------------------\n";

        for (int i = 1; i <= 10; i++) {
            cout << number << " x " << i << " = " << number * i << endl;
        }

        do {
            cout << "\nGenerate another table? (y/n): ";
            cin >> generate;

            if (generate != 'y' && generate != 'n') {
                cout << "Invalid input! Please enter y or n.\n";
            }

        } while (generate != 'y' && generate != 'n');
    }

    cout << "Goodbye!" << endl;
    return 0;
}
