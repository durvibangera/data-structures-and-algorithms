#include<iostream>
using namespace std;

bool isPerfectSquare(int num) {
    if (num<2) return true;
    int st=1,end=num/2;
    while(st<=end){
        long mid = st + (end-st)/2;
        long sq = mid*mid;
        if(sq==num) return true;
        if(sq<num){
            st = mid +1;
        } else {
            end = mid-1;
        }
    }
    return false;
}

int main(){
    int num =14;
    cout<<isPerfectSquare(num)<<endl;
    return 0;
}