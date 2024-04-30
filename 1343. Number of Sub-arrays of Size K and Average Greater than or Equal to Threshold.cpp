//
// Created by Lenovo on 2024/4/30.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int res =0;
        int sum=0;
        int j=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(i-j>=k) sum-=arr[j++];
            if(i-j+1==k) res+=(sum/k>=threshold);//平均值大于等于阈值的子数组数目
        }
        return res;
    }
};


int main() {
    Solution s;
    vector<int> arr = {2,2,2,2,5,5,5,8};
    int k = 3;
    int threshold = 4;
    cout << s.numOfSubarrays(arr, k, threshold) << endl;
    return 0;
}