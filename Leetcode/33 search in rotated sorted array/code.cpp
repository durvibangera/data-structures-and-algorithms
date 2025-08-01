#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int st=0,end=nums.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[st]<=nums[mid]) { //left side sorted
            if(nums[st]<=target && target<=nums[mid]){ //left mein hi hai target
                end = mid-1;
            } else { // right mein value hai so update the starting point
                st = mid+1;
            }
        } else { //right side sorted
            if(nums[mid]<=target && target<=nums[end]){ //right mein hi target hai update start point
                st = mid+1;
            } else { //left mein hai so update end point
                end = mid -1;
            }
        }
    }
    return -1;
}
int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    int result = search(nums, target);
    cout << "index of tar: " << target << ": " << result << endl; 
    return 0;
}