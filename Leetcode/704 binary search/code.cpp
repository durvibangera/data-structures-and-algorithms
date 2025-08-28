#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& nums, int st, int end, int target){
    if(st<=end){
        int mid= st+(end-st)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<=target) return binarySearch(nums,mid+1,end,target);
        else return binarySearch(nums,st,mid-1,target);
    }
    return -1;
}

int search(vector<int>& nums, int target) {
    return binarySearch(nums,0,nums.size()-1,target);
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 3;
    int result = search(nums, target);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }
    return 0;
}