#include <iostream>
using namespace std;

int main() {
    string sentence;
    int spaces = 0;
    int characters = 0;

    cout << "Enter sentence: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            spaces++;
        } else {
            characters++;
        }
    }

    cout << "Characters: " << sentence.length() << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Letters: " << characters << endl;
    return 0;
}