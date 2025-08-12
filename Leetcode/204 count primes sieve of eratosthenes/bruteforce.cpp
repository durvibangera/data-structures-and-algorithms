#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
    int count=0;
    const int N = n - 1; 
    for(n=2;n<=N;n++){
        bool isPrime=true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime) {
            count++;
        }
    }
    return count;
}

int main() {
    int n = 50; 
    cout << "enter range: ";
    cin >> n;
    cout << "number of primes less than " << n << ": " << countPrimes(n) << endl;
    return 0;
}
