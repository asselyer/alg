#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n = 5;
    int sum=0;
    int i=1;
    // vector<int> nums = {1,2,3};
    // for(int i =1; i<=n;i++){
    //     sum+=i;
    // }

    while(i<=n){
        sum+=i;
        i+=1;
    }
    cout<<sum;
    return 0;
}