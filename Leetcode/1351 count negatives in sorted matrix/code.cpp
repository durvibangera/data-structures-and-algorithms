#include <iostream>
#include <vector>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int row=m-1,col=0;
    int count =0;
    while(row>=0 && col<n){
        if(grid[row][col]<0){
            count += (n-col);
            row--;
        } else {
            col++;
        }
    }
    return count;
}

int main() {
    vector<vector<int>> grid = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}
    };
    
    int result = countNegatives(grid);
    
    cout << "Number of negative numbers in the matrix: " << result << endl;
    
    return 0;
}