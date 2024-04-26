//
// Created by Lenovo on 2024/4/26.
//
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans =INT_MAX;
        for(int i=0;i+k-1<nums.size();i++){
            ans= min(ans,nums[i+k-1]-nums[i]);
        }
        return ans;

    }
};
int main() {
    Solution s;
    vector<int> nums = {1, 3, 10, 2, 8};
    int k = 3;
    cout << s.minimumDifference(nums, k) << endl;
    return 0;
}