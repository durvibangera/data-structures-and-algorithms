#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string toLowerCase(string s) {
    transform(s.begin(),s.end(),s.begin(),::tolower);
    return s;
}

int main() {
    string s = "Hello World!";
    string lower_s = toLowerCase(s);
    cout << "Original string: " << s << endl;
    cout << "Lowercase string: " << lower_s << endl;
    return 0;
}