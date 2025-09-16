#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> result(nums.size(),0);
    int l=0;
    int r=nums.size()-1;
    for(int i=nums.size()-1;i>=0;i--){
        if(abs(nums[l])>abs(nums[r])){
            result[i]=nums[l]*nums[l];
            l++;
        } else {
            result[i]=nums[r]*nums[r];
            r--;
        }
    }
    return result;
}

int main() {
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> result = sortedSquares(nums);
    cout << "sorted squares: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}