#include <iostream>
#include <vector>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int rich=0;
    for(auto& val : accounts){
        int sum=0;
        for(int money:val){
            sum+=money;
        }
        rich = max(rich,sum);
    }
    return rich;
}

int main() {
    vector<vector<int>> accounts = {{1,2,3},{3,2,1}};
    cout << maximumWealth(accounts) << endl; // Output: 6
    return 0;
}