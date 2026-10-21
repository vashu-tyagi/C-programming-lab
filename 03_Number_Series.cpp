// Sum: 5 + 6 + 7 + 8
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 5; i <= 8; i++) {
        sum += i;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
// Output: Sum = 26
