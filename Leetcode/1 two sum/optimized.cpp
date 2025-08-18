#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> m;
    vector<int> ans;
    int n=nums.size();
    for(int i=0;i<n;i++){
        int first = nums[i];
        int second = target - first;
        if(m.find(second)!=m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first]=i;
    }
    return ans;
}

int main(){
    vector<int> nums = {5, 2, 11, 7, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << "Indices found: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }
    return 0;
}