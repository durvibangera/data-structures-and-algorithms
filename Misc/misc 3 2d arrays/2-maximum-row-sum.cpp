#include <iostream>
using namespace std;

int maximumRowSum(int mat[][3],int rows,int cols){
    int maxSum=0;
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum += mat[i][j];
        }
        maxSum = max(maxSum,sum);
    }
    return maxSum;
}

int main(){
    int mat[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    cout << "max row sum is " << maximumRowSum(mat,4,3);
    return 0;
}