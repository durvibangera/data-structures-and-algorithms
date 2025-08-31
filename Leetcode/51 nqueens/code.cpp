#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n){ //O(n)
    for(int j=0;j<n;j++){ // horizontally checking of queen exists on the side in the same row
        if(board[row][j]=='Q') return false;
    }
    for(int i=0;i<n;i++){ // vertically checking of queen exists on top in the same column
        if(board[i][col]=='Q') return false;
    }
    for(int i=row, j=col; i>=0 && j>=0; i--, j--){ //checking left diagonals
        if(board[i][j]=='Q') return false;
    }
    for(int i=row, j=col; i>=0 && j<n; i--, j++){ //checking right diagonals
        if(board[i][j]=='Q') return false;
    }
    return true;
}

void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans){
    if(row==n){
        ans.push_back({board});
        return;
    }
    for(int j=0;j<n;j++){
        if(isSafe(board, row, j, n)){
            board[row][j]='Q';
            nQueens(board, row+1, n, ans);
            board[row][j]='.';
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<string> board(n,string(n,'.'));
    vector<vector<string>> ans;
    nQueens(board, 0, n, ans);
    return ans;
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<vector<string>> solutions = solveNQueens(n);
    for(const auto& solution : solutions){
        for(const auto& row : solution){
            cout << row << endl;
        }
        cout << endl;
    }
    return 0;
}