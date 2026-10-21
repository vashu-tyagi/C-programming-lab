#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements (1-100): ";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "Invalid size" << endl;
        return 0;
    }

    int arr[100], sum = 0, product = 1;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
        product *= arr[i];
    }

    int largest = arr[0], smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) largest = arr[i];
        if (arr[i] < smallest) smallest = arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest << endl;
    cout << "Subtraction (left to right) = " << arr[0];
    for (int i = 1; i < n; i++) cout << " - " << arr[i];
    cout << " = ";
    int subtraction = arr[0];
    for (int i = 1; i < n; i++) subtraction -= arr[i];
    cout << subtraction << endl;
    return 0;
}
// Example input: n=3, elements 2 3 4
// Output includes Sum=9, Product=24, Largest=4, Smallest=2, Subtraction=-5
