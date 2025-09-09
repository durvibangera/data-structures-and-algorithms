#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    long long total =0;
    for(int i=0;i<digits.size();i++){
        total = total*10 + digits[i];
    }
    total += 1;
    vector<int> plusone;
    if(total==0) plusone.push_back(0);
    while(total>0){
        int dig = total%10;
        plusone.push_back(dig);
        total /= 10;
    }
    reverse(plusone.begin(),plusone.end());
    return plusone;
}

int main() {
    vector<int> digits = {9, 9, 9};
    vector<int> result = plusOne(digits);
    
    cout << "Result: ";
    for (int digit : result) {
        cout << digit << " ";
    }
    cout << endl;
    
    return 0;
}