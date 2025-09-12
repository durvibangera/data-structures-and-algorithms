#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkIfExist(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        int st=0,end=arr.size()-1;
        int target = arr[i]*2;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(arr[mid]==target){
                if(mid!=i) return true;
                if (mid + 1 < arr.size() && arr[mid + 1] == target) return true;
                if (mid - 1 >= 0 && arr[mid - 1] == target) return true;
                break; 
            } else if(arr[mid]<target){
                st=mid+1;
            } else {
                end =mid-1;
            }
        }
    }
    return false;
}

int main() {
    vector<int> arr = {10, 2, 5, 3};
    bool result = checkIfExist(arr);
    
    cout << "Result: " << (result ? "true" : "false") << endl;
    
    return 0;
}