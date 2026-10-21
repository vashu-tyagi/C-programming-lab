#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;
    ch = tolower(static_cast<unsigned char>(ch));

    if (ch < 'a' || ch > 'z')
        cout << "Invalid alphabet" << endl;
    else if (ch == 'a' || ch == 'e' || ch == 'i' ||
             ch == 'o' || ch == 'u')
        cout << "Vowel" << endl;
    else
        cout << "Consonant" << endl;

    return 0;
}
// Example input: e
// Output: Vowel
