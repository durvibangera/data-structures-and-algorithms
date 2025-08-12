#include <iostream>
using namespace std;

string isPrime(int n) {
    if (n <= 1) return "Not Prime";
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return "Not Prime";
    }
    return "Prime";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << " is " << isPrime(n) << endl;
    return 0;
}