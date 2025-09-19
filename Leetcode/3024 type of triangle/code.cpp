#include <iostream>
#include <vector>
using namespace std;

string triangleType(vector<int>& nums) {
    int a = nums[0], b = nums[1], c = nums[2];
    if(!(a + b > c && a + c > b && b + c > a)) return "none";
    if(a == b && b == c) return "equilateral";
    if(a == b || b == c || a == c) return "isosceles";
    return "scalene";
}

int main() {
    vector<int> nums = {2, 2, 3};
    string result = triangleType(nums);
    cout << "The type of triangle is: " << result << endl;
    return 0;
}