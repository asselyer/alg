#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    // for(int i=a;i>=1;i--){
    //     if(a%i==0 && b%i==0){
    //         cout<<i;
    //         break;
    //     }
    // }
    while(a>0 && b>0){
        if(a>b){
            a=a&b;
        }else{
            b=b%a;
        }
    }
    cout<<a+b;
  
    return 0;
}