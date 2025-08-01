#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    int freq = 0, ans=0;
    for(int i=0;i<n;i++){
        if(freq == 0){
            ans = nums[i];
            freq = 1;
        } else if(nums[i] == ans) {
            freq++;
        } else {
            freq--;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1,2,2,1,1};
    int result = majorityElement(nums);
    cout << "the majority element is: " << result << endl;
    return 0;
}