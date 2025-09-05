#include <iostream>
using namespace std;

int mySqrt(int x) {
    if (x<2) return x;
    int st = 1, end = x/2, ans=0;
    while(st<=end){
        long mid = st + (end-st)/2;
        long sq = mid * mid;
        if(sq==x) return mid;
        if (sq<x){
            ans= mid;
            st = mid+1;
        } else {
            end = mid -1;
        }
    }
    return ans;
}

int main(){
    int x = 8;
    cout<<mySqrt(x)<<endl;
    return 0;
}