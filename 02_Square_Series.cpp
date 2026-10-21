// Sum of squares: 1^2 + 2^2 + 3^2 + ... + 12^2
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 12; i++) {
        sum += i * i;
    }
    cout << "Sum of squares = " << sum << endl;
    return 0;
}
// Output: Sum of squares = 650
