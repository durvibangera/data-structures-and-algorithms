#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int n=matrix.size(),m=matrix[0].size();
    int c0=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j==0){
                    c0=0;
                }else{
                    matrix[0][j]=0;
                }
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }
    if(matrix[0][0]==0){
        for(int j=0;j<m;j++){
            matrix[0][j]=0;
        }
    }
    if(c0==0){
        for(int i=0;i<n;i++){
            matrix[i][0]=0;
        }
    }
}

int main() {
    vector<vector<int>> matrix = { { 0, 1, 2, 0 }, { 3, 4, 0, 2 }, { 1, 3, 1, 5 } };
    setZeroes(matrix);
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}