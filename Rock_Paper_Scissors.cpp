#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int user, computer;

    cout << "Rock Paper Scissors\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Enter your choice: ";
    cin >> user;

    if (user < 1 || user > 3) {
        cout << "Invalid choice." << endl;
        return 0;
    }

    computer = rand() % 3 + 1;
    const char* names[] = {"", "Rock", "Paper", "Scissors"};

    cout << "You chose: " << names[user] << endl;
    cout << "Computer chose: " << names[computer] << endl;

    if (user == computer)
        cout << "It's a draw!" << endl;
    else if ((user == 1 && computer == 3) ||
             (user == 2 && computer == 1) ||
             (user == 3 && computer == 2))
        cout << "You win!" << endl;
    else
        cout << "Computer wins!" << endl;

    return 0;
}
