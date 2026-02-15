#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int>& arr,int st,int mid,int end){
    vector<int> temp;
    int i=st, j=mid+1, invCount=0;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            invCount += mid-i+1;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+st]=temp[idx];
    }
    return invCount;
}

int mergeSort(vector<int> &arr, int st, int end){
    if(st<end){
        int mid=st+(end-st)/2;
        int leftCount = mergeSort(arr, st, mid);
        int rightCount = mergeSort(arr, mid+1, end);
        int invCount = merge(arr, st, mid, end);
        return invCount+leftCount+rightCount;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << mergeSort(arr, 0, n-1) << endl;
    return 0;
}