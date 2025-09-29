#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x) {
    vector<int> result;
    for(int i=0;i<words.size();i++){
        for(int j=0;j<words[i].size();j++){
            if(words[i][j]==x){
                result.push_back(i);
                break;
            }
        }
    }
    return result;
}

int main(){
    vector<string> words = {"hello", "world", "leetcode"};
    char x = 'o';
    vector<int> result = findWordsContaining(words, x);
    for(int index : result){
        cout << index << " ";
    }
    cout << endl;
    return 0;
}