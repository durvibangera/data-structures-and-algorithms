#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int n=s.length();
    int l=0,r=0,res=0;
    vector<bool>visited(256,false);
    if(n==0 || n==1){
        return n;
    }
    while(r<n){
        while(visited[s[r]]==true){
            visited[s[l]]=false;
            l++;
        }
        visited[s[r]]=true;
        res=max(res,r-l+1);
        r++;
    }
    return res;
}

int main() {
    string s = "abcabcbb";
    int res = lengthOfLongestSubstring(s);
    cout << res << endl;
    return 0;
}