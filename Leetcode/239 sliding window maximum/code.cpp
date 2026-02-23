#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> dq;
    vector<int> res;
    // only for the first window
    for(int i=0;i<k;i++){
        while(dq.size()>0 && nums[dq.back()]<=nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k;i<nums.size();i++){
        res.push_back(nums[dq.front()]); //add the current element incase its maximum in the future lol
        while(dq.size()>0 && dq.front()<=i-k){ //if not part of the current window then remove it
            dq.pop_front();
        }
        while(dq.size()>0 && nums[dq.back()]<=nums[i]){ // remove the smaller values jo aage hai cause they can never be maximum
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(nums[dq.front()]);
    return res;
}

int main(){
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> res = maxSlidingWindow(nums,k);
    for(int i:res){
        cout<<i<<" ";
    }
}