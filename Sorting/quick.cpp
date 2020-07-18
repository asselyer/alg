#include<iostream>

using namespace std;
int a[1000];

int partition(int l, int r){
    int m = a[(l+r)/2];
    int i=l;
    int j=r;
    while(true){
        while(a[i]<m){
            i++;
        }
        while(a[j]>m){
            j--;
        }
        if(i>=j){
            return j;
        }

        int c = a[i];
        a[i]=a[j];
        a[j]=c;

        i++;
        j--;
    }
}
void qsort(int l, int r){
    if(l<r){
        int p = partition(l,r);
        qsort(l,p);
        qsort(p+1,r);
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    qsort(1,n);
    for(int i =1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//5 1 | 6| 2 3
//5 1 3| 2 6
//5 1 2 3 6
//5 1 2 
//1 5 2
//

