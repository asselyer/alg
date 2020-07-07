#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    int i = n;
    int x;
    cin>>n;
    vector<int  >s;

    // do{
    //     x=n%2;
    //     s.push_back(x);
    //     n=n/2;
    // }
    // while(n/2!=0);
    // x=n%2;
    // s.push_back(x);
    while(n>0){
        s.push_back(n%2);
        n /=2;
    }
    for(int i = s.size()-1;i>=0;--i){
        cout<<s[i];
    }
    // }
    // while(n/2!=0){
    //     x=n%2;
    //     s.push_back(x);
    //     n=n/2;
    // }
    // x=n%2;
    // s.push_back(x);

    // reverse(s.begin(),s.end());
    // for(int j:s){
    //     cout<<j;
    // }
    return 0;
}