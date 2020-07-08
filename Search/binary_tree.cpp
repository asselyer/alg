#include<iostream>

using namespace std;

struct data{
    int v,left,right;
};
data a[1000];
int ns,n;

void insert(int p,int x){
    if(x>=a[p].v)
        if(a[p].right>0){
            insert(a[p].right,x);
        }
        else
            a[p].right=ns;
        
    if(x<=a[p].v)
        if(a[p].left>0){
            insert(a[p].left,x);
        }
        else
        {
            a[p].left=ns;
        }
        
}
int main(){
 
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ns++;
        a[ns].v=x;
        if(ns>1)
            insert(1,x);
    } 

    for(int i=1;i<=ns;i++){
        cout<< a[i].v<<" "<<a[i].left<<" "<<a[i].right<<endl;
    }
    return 0;
}