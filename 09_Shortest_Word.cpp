#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string line, word, shortest;
    cout << "Enter a sentence: ";
    getline(cin, line);

    stringstream ss(line);
    while (ss >> word) {
        if (shortest.empty() || word.size() < shortest.size())
            shortest = word;
    }

    if (shortest.empty())
        cout << "No word entered." << endl;
    else
        cout << "Shortest word: " << shortest << endl;

    return 0;
}
// Example input: C++ is fun
// Output: Shortest word: is
