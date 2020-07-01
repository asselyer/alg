#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double d = b*b-4*a*c;
    auto d1 = ((-b)+sqrt(d))/(2*a);
    auto d2 = ((-b)-sqrt(d))/(2*a);

    if(a==0 && d>0){
        cout<<(-c)/b;
    }else if(a!=0 && d>=0){
        if(d1==d2){
            cout<<d1;
        }else{
            cout <<d1<<" "<<d2;
        }
    }else{
        cout<<"";
    }
    
    return 0;
}