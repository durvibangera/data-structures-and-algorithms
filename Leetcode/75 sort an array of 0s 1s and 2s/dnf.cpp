#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int n=nums.size();
    int mid=0,high=n-1,low=0;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            mid++;
            low++;
        }
        else if(nums[mid]==1){
            mid++;
        } else {
            swap(nums[high],nums[mid]);
            high--;
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
    for(int num : nums) {
        cout << num << " ";
    }
    return 0;
}