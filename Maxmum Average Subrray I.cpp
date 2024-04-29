//
// Created by Lenovo on 2024/4/29.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int maxV=sum;
        for(int i=k;i<n;i++){//移动右指针
            sum=sum-nums[i-k]+nums[i];//更细sum

            maxV=max(maxV,sum);
        }
        return (double)maxV/k;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    cout << s.findMaxAverage(nums, k) << endl;
    return 0;
}