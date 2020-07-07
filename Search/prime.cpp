#include<iostream>

using namespace std;

const int N=100002;
bool marked[N];

int main(){
    int n;
    cin>>n;
    marked[1]=true;
    for(int i=1;i<=n;i++){
        if(!marked[i]){
           // cout<<i<<endl;
           for(int j=2*i;j<=n;j+=i){

               marked[j]=true;
           }
        }
    }
    for(int i=1;i<=n;i++){
        if(!marked[i]){
            cout<<i<<endl;
        }
    }
    return 0;
}