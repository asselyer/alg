#include<iostream>

using namespace std;

const int N=100002;
bool marked[N];

int main(){
    int n;
    cin>>n;

    int x=n;
    int ans=0;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            ans+=x/i;
        }
    }
    if(x>1){
        
    }
    return 0;
}