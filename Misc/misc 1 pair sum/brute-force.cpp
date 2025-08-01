#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target){
    vector<int> ans;
    int n = arr.size();
    for(int i = 0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == target){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                return ans; 
            }
        }
    }
    return ans; 
}

int main(){
    vector<int> arr = {2,7,11,15};
    int target = 13;
    vector<int> ans = pairSum(arr, target);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}