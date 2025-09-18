#include <iostream>
using namespace std;

int countDigits(int num) {
    int answer =0;
    int temp=num;
    while(temp>0){
        int digit=temp%10;
        if(digit!=0 && num%digit==0) answer++;
        temp /=10;
    }
    return answer;
}

int main() {
    int num = 121;
    int result = countDigits(num);
    cout << "The count of digits that divide " << num << " is: " << result << endl;
    return 0;
}