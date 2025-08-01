#include <vector>
#include <iostream>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                ans[i]*=nums[j];
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);
    
    cout << "Product of array except itself: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}