//
// Created by Lenovo on 2024/4/25.
//
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        int start =0;
        int end =k;
        int ans=0;
        for(;start<s.size()-k+1;start++){
            int res=0;
            for(int i=start;i<start+k;i++){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') res++;
            }
            ans=max(ans,res);
        }
        return ans ;
    }
};

//class Solution{
//private:
//    bool isVowel(char c){
//        return c=='a'||c=='e'||c=='i'||c=='o'||c =='u';
//    }
//public:
//    int maxVowels(string s,int k){
//        int ans =0;
//        int vowels =0;
//
//        // 初始化滑动窗口内的元音字母数
//        for(int i=0;i<k;i++){//i代表右指针
//            if(isVowel(s[i])) vowels++;
//        }
//        ans =vowels;
//
//        //滑动窗口
//        for(int i=k;i<s.size();i++){
//            if(isVowel(s[i])){
//                vowels++;
//            }
//            if(isVowel(s[i-k])){
//                vowels--;
//            }
//            ans =max(ans ,vowels);
//        }
//        return ans;
//    }
//};




int main() {
    string s = "abciiidef";
    int k = 3;
    Solution sol;
    cout<<sol.maxVowels(s,k)<<endl;
    return 0;
}


