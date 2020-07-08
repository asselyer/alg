#include<iostream>

using namespace std;
int a[1000];
void merge(int l, int m, int r){
    int L[1000];
    int R[1000];
    int i1 = 1+m-l;
    int i2 = r-m;
    L[i1];
    R[i2];
    for(int i=0;i<i1;i++){
        L[i]=a[l+i];
    }
    for(int j=0;j<i2;j++){
        R[j]=a[j+m+1];
    }

    int p=l;
    int i=0,j=0;
    while(i<i1 && i2>j){
        if(L[i]<=R[j]){
            a[p]=L[i];
            i++;
        }
        else{
            a[p]=R[j];
            j++;
        }
        p++;
    }
    while(i<i1){
        a[p]=L[i];
        i++;
        p++;
    }
    while(j<i2){
        a[p]=R[j];
        j++;
        p++;
    }
}
void msort(int l,int r){
    if(l<r){
        int p=(l+r)/2;
        msort(l,p);
        msort(p+1,r);

        merge(l,p,r);
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    msort(0,n-1);
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}