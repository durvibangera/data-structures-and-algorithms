#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int st=1,end=arr.size()-2;
    while(st<=end){
        int mid = st+ (end-st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){ //mid is only peak
            return mid;
        }
        if(arr[mid-1]<arr[mid]){ //on the left(inc) side of the mountain
            st=mid+1; //update search space to only right side of mid now
        } else { //on the right(dec) side of the mountain 
            end=mid-1; //update search space to only left side of mid now
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {0, 2, 1, 0};
    cout << "peak index: " << peakIndexInMountainArray(arr) << endl; 
    return 0;
}