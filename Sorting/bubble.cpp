#include<iostream>

using namespace std;

int a[1000];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j =1;j<=n-1;j++){
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                int c=a[i];
                a[i]=a[i+1];
                a[i+1]=c;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
