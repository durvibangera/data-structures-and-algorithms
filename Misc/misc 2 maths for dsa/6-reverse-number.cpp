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

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Reverse of "<<n<<" is "<<reverse(n)<<endl;
    return 0;
}