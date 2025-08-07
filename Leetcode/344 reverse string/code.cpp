#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int n=s.size();
    int st=0,end=n-1;
    while(st<end){
        swap(s[st++],s[end--]);
    }
}

int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);
    for (char c : s) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}