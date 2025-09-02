#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<vector<int>> s;

void getAllComb(vector<int>& arr, int idx, vector<int> &combin, vector<vector<int>> &ans, int target){
    if(idx==arr.size() || target<0) return;
    if(target==0){
        if(s.find(combin)==s.end()){
            ans.push_back(combin);
            s.insert(combin);
        }
        return;
    }
    combin.push_back(arr[idx]);
    getAllComb(arr,idx+1,combin,ans,target-arr[idx]); //single
    getAllComb(arr,idx,combin,ans,target-arr[idx]); //multiple
    combin.pop_back(); //backtracking step
    getAllComb(arr,idx+1,combin,ans,target); //exclude
}

vector<vector<int>> combinationSum(vector<int>& arr, int target) {
    vector<vector<int>> ans;
    vector<int> combin;
    getAllComb(arr,0,combin,ans,target);
    return ans;
}

int main(){
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = combinationSum(arr, target);
    for(const auto& combination : result) {
        for(int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}