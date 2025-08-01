#include <vector>
#include <iostream>
using namespace std;

int maxArea(vector<int>& height) {
    int maxWater = 0;
    int lp =0, rp=height.size()-1;
        while(lp<rp){
            int w = rp-lp;
            int h = min(height[lp],height[rp]);
            int area = w*h;
            maxWater = max(area,maxWater);
            height[lp] < height [rp] ? lp++ : rp--;
        }
    return maxWater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << "container with most water: " << maxArea(height) << endl;
    return 0;
}