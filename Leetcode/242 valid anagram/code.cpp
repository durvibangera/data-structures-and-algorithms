#include <iostream>
#include <vector>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.size()!=t.size()) return false;
    vector<int> freq(26,0);
    for(char c : s) freq[c- 'a']++;
    for(char c : t) freq[c- 'a']--; //this way it'll cancel out if the count of the letters are same
    for(int count:freq){
        if(count!=0) return false;
    }
    return true;
}

int main() {
    string s = "anagram", t = "nagaram";
    cout << (isAnagram(s, t) ? "true" : "false") << endl; // Output: true
    return 0;
}