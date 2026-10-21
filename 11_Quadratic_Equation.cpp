#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation." << endl;
        return 0;
    }

    double d = b * b - 4 * a * c;
    if (d > 0) {
        cout << "Roots: " << (-b + sqrt(d)) / (2 * a)
             << " and " << (-b - sqrt(d)) / (2 * a) << endl;
    } else if (d == 0) {
        cout << "Equal roots: " << -b / (2 * a) << endl;
    } else {
        cout << "Roots are complex." << endl;
    }
    return 0;
}
// Example input: 1 -3 2
// Output: Roots: 2 and 1
