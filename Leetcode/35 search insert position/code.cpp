#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int st=0,end=nums.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(nums[mid]==target) return mid;
        if(nums[mid]<target){
            st=mid+1;
        } else{
            end = mid-1;
        }
    }
    return st; // we return st because that is where the number should be inserted if it doesnt exist in the array
}

int main(){
    vector<int> nums = {1,3,5,6};
    int target = 5;
    cout<<searchInsert(nums,target);
    return 0;
}