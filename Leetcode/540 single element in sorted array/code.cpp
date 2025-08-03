#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& A) {
    int n=A.size();
    if(n==1) return A[0];
    int st=0,end=n-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(mid==0 && A[0]!=A[1]) return A[mid];
        if(mid==n-1 && A[n-1]!=A[n-2]) return A[mid];
        if(A[mid-1]!=A[mid] && A[mid]!=A[mid+1]) return A[mid];
        if(mid%2==0){ //even number of elements on the side of mid
            if(A[mid-1]==A[mid]){ //yehi side pe single element has to update search space
                end=mid-1;
            } else { //dusre side pe hai
                st=mid+1;
            }
        } else { //odd number of elements hai on the side of mid
            if(A[mid-1]==A[mid]){ //dusre side pe single element has to update search space
                st=mid+1;
            } else { //yehi side pe hai
                end=mid-1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << "single non-duplicate element: " << singleNonDuplicate(nums) << endl;
    return 0;
}