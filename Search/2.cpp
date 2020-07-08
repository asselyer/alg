#include<iostream>

using namespace std;


bool isPrime(int a){
    if(a==1) return false;
    for(int i=2;i*i<=a;i++)
        if(a%i==0)
            return false;
    return true;
}
// }
int main(){
    int n;
    cin>>n;
    //for(int i=1;i<=n;i++){
    if(!isPrime(n)){
        cout<<"composite";
    }
    else{
        cout<<"prime";
    }
    //}
    return 0;
}