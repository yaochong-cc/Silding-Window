//
// Created by Lenovo on 2024/4/24.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solutin{
public:
    int maxSarisfied(vector<int>& customers, vector<int>& grumpy, int minutes){
        int s[2] {};
        int maxS = 0;
        for(int i=0;i<customers.size();i++){
            s[grumpy[i]]+=customers[i];
            if(i<minutes -1){
                continue;
            }
            maxS =max(maxS,s[1]);
            s[1]-=grumpy[i-minutes+1]?customers[i-minutes+1]:0;
        }
        return s[0]+maxS;
    }
};
int main(){
    Solutin sol;
    vector<int> customers{1,0,1,2,1,1,7,5};
    vector<int> grumpy{0,1,0,1,0,1,0,1};
    int minutes = 3;
    cout<<sol.maxSarisfied(customers,grumpy,minutes)<<endl;
}