#include <iostream>
using namespace std;

int gcd(int a,int b){
    int gcd=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    return gcd;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << ": " << gcd(a, b) << endl;
    return 0;
}