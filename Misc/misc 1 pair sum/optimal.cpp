#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target){
    vector<int> ans;
    int n = arr.size();
    int i =0 , j= n-1;
    while(i<j){
        int pairSum = arr[i] + arr[j];
        if(pairSum<target){
            i++;
        } else if(pairSum > target){
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
    vector<int> arr = {2,7,11,15};
    int target = 13;
    vector<int> ans = pairSum(arr, target);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}