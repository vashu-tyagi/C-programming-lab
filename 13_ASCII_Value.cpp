#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "ASCII value = " << static_cast<int>(ch) << endl;
    return 0;
}
// Example input: A
// Output: ASCII value = 65
