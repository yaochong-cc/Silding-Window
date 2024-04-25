//
// Created by Lenovo on 2024/4/25.
//
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

class Solution {
public:
    int divisorSubstrings(int num, int k){
        string s= to_string(num);
        int ans =0;
        for(int i=0;i<=s.size()-k;i++){
            int tem =stoi(s.substr(i,k));
            if(tem&& num%tem==0) ans++;
        }
        return ans ;
    }
};
int main() {
    Solution s;
    int num = 1000;
    int k = 3;
    cout << s.divisorSubstrings(num, k) << endl;
    return 0;
}