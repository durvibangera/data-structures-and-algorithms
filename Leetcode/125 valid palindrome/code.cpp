#include <iostream>
#include <string>
using namespace std;

bool isAlphaNum(char ch){
    if((ch>='0' && ch<='9') || ('a'<=tolower(ch) && tolower(ch)<='z')) {
        return true;
    }
    return false;
}

bool isPalindrome(string s) {
    int st=0,end=s.size()-1;
    while(st<end){
        if(!isAlphaNum(s[st])){
            st++;
            continue;
        }
        if(!isAlphaNum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st])!=tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    if(isPalindrome(s)) {
        cout << "The string is a valid palindrome." << endl;
    } else {
        cout << "The string is not a valid palindrome." << endl;
    }
    return 0;
}