// Sum: 1 + 2 + 3 + ... + 12
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 12; i++) {
        sum += i;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
// Output: Sum = 78
