#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<string> nums = {"hello", "world","milk"};
    string s ="abcdefg";
    //int q = count(begin(nums),end(nums),7);
    sort(begin(nums),end(nums));
    for(auto x : nums){
        cout<<x<<" ";
    }
    // for(auto c : nums){
    //     if(c==7){
    //         q +=1;
    //     }     
    // }
    //cout <<q;
    return 0;
}