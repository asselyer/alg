#include<iostream>

using namespace std;

int main(){
    // int n;
    // cin >> n ;
    // if(n>=1){
    //     int sum=0;
    //     while(n>0){
    //         sum+=n;
    //         --n;
    //     }
    //     cout<<sum;
    // }else{
    //     cout<<"not pos";
    // }
    int a=5;
    int b;
    do{
        cout<<"guess the number ";
        cin>>b;
    }while(a!=b);
    cout<<"well done it is 5";
    return 0;
}