#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comparator(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first < p2.first) return true;
    return false;
}

int main(){
    vector<pair<int, int>> v = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};
    sort(v.begin(),v.end(),comparator);
    for(auto p:v){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}