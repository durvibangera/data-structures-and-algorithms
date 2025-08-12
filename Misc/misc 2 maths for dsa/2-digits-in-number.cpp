#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int printDigits(int n) {
    while (n != 0) {
        int digits = n % 10;
        cout << digits << " ";
        n /= 10;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of digits in " << n << ": " << countDigits(n) << endl;
    cout << "Sum of digits in " << n << ": " << sumDigits(n) << endl;
    cout << "Digits in " << n << ": ";
    printDigits(n);
    cout << endl;
    return 0;
}
