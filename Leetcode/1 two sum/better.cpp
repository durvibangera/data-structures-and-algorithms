#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
//basically pair sum but with sorting

vector<int> twoSum(vector<int> arr, int target){
    vector<int> ans;
    int n = arr.size();
    int i =0 , j= n-1;
    sort(arr.begin(), arr.end());
    while(i<j){
        int twoSum = arr[i] + arr[j];
        if(twoSum<target){
            i++;
        } else if(twoSum > target){
            j--;
        } else {
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2, 1, 7, 4, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << "Values: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }
    return 0;
}