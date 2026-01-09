#include <iostream>
using namespace std;

int main() {
    int secret = 7;
    int guess;

    cout << "Guess the secret number: ";
    cin >> guess;

    while (guess != secret) {
        if (guess > secret) {
            cout << "Too high\n";
        } else {
            cout << "Too low\n";
        }

        cout << "Guess again: ";
        cin >> guess;
    }

    cout << "Congratulations! You guessed the correct number.\n";

    return 0;
}
