#include <iostream>
using namespace std;

int subtractProductAndSum(int n) {
    int add=0,multi=1;
    while(n>0){
        int digit = n%10;
        add += digit;
        multi *= digit;
        n/=10;
    }
    return multi-add;
}

int main() {
    int n = 234;
    int result = subtractProductAndSum(n);
    return 0;
}