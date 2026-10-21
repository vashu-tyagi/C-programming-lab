#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string line, word, largest;
    cout << "Enter a sentence: ";
    getline(cin, line);

    stringstream ss(line);
    while (ss >> word) {
        if (word.size() > largest.size())
            largest = word;
    }

    cout << "Largest word: " << largest << endl;
    return 0;
}
// Example input: C++ is very interesting
// Output: Largest word: interesting
