#include<iostream>

using namespace std;
int a[1000];
void merge(int l, int m, int r){
    int L[1000];
    int R[1000];
    int i1=0;
    int i2=0;

    for(int i=0;i<m-l+1;i++){
        L[i]=a[l+i];
    }
    for(int j=0;j<=r-m;j++){
        R[j]=a[j+1+m];
    }
    
    int p=l;

    while(i1<(m-l+1) && i2<(r-m)){
        if(L[i1]<=R[i2]){
            a[p]=L[i1];
            i1++;
        }
        else{
            a[p]=R[i2];
            i2++;
        }
        p++;
    }
    while(i1<(m-l+1)){
        a[p]=L[i1];
        i1++;
        p++;
    }
    while(i2<(r-m)){
        a[p]=R[i2];
        i2++;
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
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}


