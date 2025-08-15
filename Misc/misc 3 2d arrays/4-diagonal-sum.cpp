#include <iostream>
using namespace std;

int diagonalSum(int mat[][3],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum += mat[i][j];
            } else if(j==n-1-i){
                sum += mat[i][j];
            } 
        }
    }
    return sum;
}

int diagonalSumBetter(int mat[][3], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += mat[i][i];
        if(i!=n-1-i){
            sum += mat[i][n-1-i];
        }
    }
    return sum;
}

int main(){
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n=3;
    cout << "diag sum is " << diagonalSum(mat,n) << endl;
    cout << "diag sum is " << diagonalSumBetter(mat,n);
    return 0;
}