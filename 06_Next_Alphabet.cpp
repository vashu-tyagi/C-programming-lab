#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    for (char &ch : text) {
        if (ch >= 'a' && ch <= 'z')
            ch = (ch == 'z') ? 'a' : ch + 1;
        else if (ch >= 'A' && ch <= 'Z')
            ch = (ch == 'Z') ? 'A' : ch + 1;
    }

    cout << "Updated string: " << text << endl;
    return 0;
}
// Example input: Ram
// Output: Updated string: Sbn
