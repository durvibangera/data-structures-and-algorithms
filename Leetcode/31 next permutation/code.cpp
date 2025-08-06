#include <vector>
#include <iostream>
using namespace std;
#include <algorithm>

void nextPermutation(vector<int>& A) {
    int piv=-1;
    int n=A.size();
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            piv = i;
            break;
        }
    }
    if(piv==-1){
        reverse(A.begin(),A.end());
        return;
    }
    for(int i=n-1;i>piv;i--){
        if(A[i]>A[piv]){
            swap(A[i],A[piv]);
            break;
        }
    }
    int i=piv+1,j=n-1;
    while(i<=j){
        swap(A[i],A[j]);
        i++;
        j--;
    }
}

int main() {
    vector<int> A = {1, 2, 3};
    nextPermutation(A);
    for (int num : A) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}