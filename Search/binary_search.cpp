#include<iostream>
using namespace std;

const int N = 1000000;

int n,m;
int a[N];

int main(){
    cin>> n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int j=1;j<=m;j++){
        int x;
        cin>>x;
        
        int l=1,r=n;
        while(l<r){
            int mid = (l+r)/2;
            if(x<=a[mid])
                r=mid;
            else
            {
                l=mid+1;
            }
            
        }
        //a[l]=a[r] min x<=a[l]
        if(a[l]==x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}