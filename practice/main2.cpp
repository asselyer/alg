#include<iostream>

using namespace std;

int main(){
    double n, a, b, x, y;
    cin>>n>>a>>b>>x>>y;
    double s1=(n*y/100);
    double s2=(n*x/100);
    if(n<=a && n < b && a<b){
        cout<<n;
        return 0;
    }
    else if (n>a && a<b){
        if(s1<0 || s2<0){
            s1=(-1)*s1;
            s2=(-1)*s2;
        }
        if(n>b){
            cout<<n-s1;
        }else{
            cout<<n-s2;
        }
        return 0;
    } 
    return 0;
}