#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void AngTemp(vector<int> v){
    int avgT=0;
    int nn=0;
    for(int s:v){
        avgT+=s;
    }
    avgT=avgT/v.size();
   
    vector<int> ch;
    for(int i =0;i<v.size();i++){
        if(v[i]>avgT){
            ch.push_back(i);
        }
    }
    cout<< ch.size()<<endl;
    for(int d:ch){
        cout<<d<<" ";
    }

}

int main(){
    int n;
    
    cin>>n;
    vector<int> t(n);
    for(int& a:t){
        cin>> a;
    }
    AngTemp(t);
    return 0;
}