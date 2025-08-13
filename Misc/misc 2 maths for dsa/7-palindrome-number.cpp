#include <iostream>
#include <climits>
using namespace std;

int reverse(int n) {
    int revnum=0;
    while(n!=0){
        int digit = n%10;
        if(revnum > INT_MAX/10 || revnum < INT_MIN/10){
            return 0;
        }
        revnum = (revnum*10) + digit;
        n= n/10;
    }
    return revnum;
}

bool isPalindrome(int n) {
    if(n<0) return false;
    int revnum = reverse(n);
    return n==revnum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPalindrome(n)) {
        cout << n << " is a palindrome." << endl;
    } else {
        cout << n << " is not a palindrome." << endl;
    }
    return 0;
}