#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
    // tc: O(N) & sc:O(1)
    int n=height.size();
    int l=0,r=n-1;
    int lmax=0,rmax=0;
    int ans=0;
    while(l<r){
        lmax=max(lmax,height[l]);
        rmax=max(rmax,height[r]);
        if(lmax<rmax){
            ans+= lmax-height[l];
            l++;
        }else{
            ans+= rmax-height[r];
            r--;
        }
    } 
    return ans;
}

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(height) << endl; // Output: 6
    return 0;
}