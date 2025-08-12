#include <iostream>
using namespace std;

bool isArmstrong(int n){
    int copyN=n;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum+=digit*digit*digit;
        n/=10;
    }
    return sum==copyN;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}