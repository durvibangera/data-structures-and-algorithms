#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for(int val: nums){
        ans = val^ans;
    }
    return ans;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "The single number is: " << singleNumber(nums) << endl;
    return 0;
}