#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool checkIfPangram(string sentence) {
    vector<bool> seen(26,false);
    for(char c:sentence){
        seen[c-'a'] =true;
    }
    for(bool exists:seen){
        if(!exists) return false;
    }
    return true;
}

int main() {
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    
    bool result = checkIfPangram(sentence);
    
    if(result) {
        cout << "The sentence is a pangram." << endl;
    } else {
        cout << "The sentence is not a pangram." << endl;
    }
    
    return 0;
}