#include <vector>
#include <iostream>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    for (int val : nums) {
        int freq = 0;
        for (int element : nums) {
            if (element == val) {
                freq++;
            }
        }
        if (freq > n / 2) {
            return val;
        }
    }
    return -1; 
}

int main() {
    vector<int> nums = {1,2,2,1,1};
    int result = majorityElement(nums);
    cout << "the majority element is: " << result << endl;
    return 0;
}