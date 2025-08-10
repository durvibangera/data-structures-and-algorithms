#include <iostream>
#include <string>
using namespace std;

bool isSameFreq(int freq1[],int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;  
        } 
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    int freq[26] = {0};
    int n1=s1.length(),n2=s2.length();
    for(int i=0;i<n1;i++){
        freq[s1[i]-'a']++;
    }
    int windSize=n1;
    for(int i=0;i<n2;i++){
        int windIdx=0,idx=i;
        int windFreq[26]={0};
        while(windIdx<windSize && idx<n2){
            windFreq[s2[idx]-'a']++;
            windIdx++;
            idx++;
        }
        if(isSameFreq(freq,windFreq)){
            return true;  
        } 
    }
    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";
    if (checkInclusion(s1, s2)) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}