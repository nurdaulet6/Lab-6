#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the position of fibonacci number (0 <= n <= 20): ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Error, Input must be between 0 and 20" << endl;
        return 1;
    }
    cout << "Fibonacci number at position " << n << ": " << fibonacci(n) << endl;

    return 0;
}