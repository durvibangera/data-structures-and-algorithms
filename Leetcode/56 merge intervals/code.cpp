#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& arr) {
    vector<vector<int>> res;
    sort(arr.begin(),arr.end());
    res.push_back(arr[0]);
    for(int i=1;i<arr.size();i++){
        vector<int>& last=res.back();
        vector<int>& curr=arr[i];
        if(curr[0]<=last[1]){
            last[1]=max(last[1],curr[1]);
        }else{
            res.push_back(curr);
        }
    }
    return res;
}

int main() {
    vector<vector<int>> arr = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> res = merge(arr);
    for (const auto& interval : res) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;
    return 0;
}