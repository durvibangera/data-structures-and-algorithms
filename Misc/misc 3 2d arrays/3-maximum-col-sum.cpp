#include <iostream>
using namespace std;

int maximumColSum(int mat[][3],int rows,int cols){
    int maxSum=0;
    for(int i=0;i<cols;i++){
        int sum=0;
        for(int j=0;j<rows;j++){
            sum += mat[j][i];
        }
        maxSum = max(maxSum,sum);
    }
    return maxSum;
}

int main(){
    int mat[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    cout << "max col sum is " << maximumColSum(mat,4,3);
    return 0;
}