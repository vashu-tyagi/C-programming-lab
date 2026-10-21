#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int balance = 1000;
    int bet, guess, number;

    cout << "=== Casino Number Guessing Game ===\n";
    cout << "Starting balance: Rs. " << balance << endl;

    while (balance > 0) {
        cout << "\nBalance: Rs. " << balance
             << "\nEnter bet (0 to quit): ";
        cin >> bet;

        if (bet == 0) break;
        if (bet < 0 || bet > balance) {
            cout << "Invalid bet.\n";
            continue;
        }

        number = rand() % 10 + 1;
        cout << "Guess a number from 1 to 10: ";
        cin >> guess;

        if (guess == number) {
            balance += bet;
            cout << "Correct! You won Rs. " << bet << "!\n";
        } else {
            balance -= bet;
            cout << "Wrong! Number was " << number
                 << ". You lost Rs. " << bet << ".\n";
        }
    }

    cout << "Game over. Final balance: Rs. " << balance << endl;
    return 0;
}
