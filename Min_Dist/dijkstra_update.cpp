#include<iostream>

using namespace std;

bool b[1000];
int a[100][100], d[100];
int n,m;

int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y,w;
        cin>>x>>y>>w;
        a[x][y]=w;
        a[y][x]=w;
    }

    for(int i =1;i<=n;i++){
        d[i]=10000000;

    }
    d[1]=0;
    for(int i=1;i<=n;i++){
        int t=10000000,p=0;
        for(int j=1;j<=n;j++){
            if((!b[j])&&(d[j]<t)){
                t=d[j];
                p=j;
            }
            
        }
        if(t==10000000){
            break;
        }
        for(int j=1;j<=n;j++){
            if((a[p][j]!=0)&&(d[j]>a[p][j]+t)){
                d[j]=a[p][j]+t;
            }
        }
        b[p]=1;
    
    }
    for(int i=1;i<=n;i++){
            cout<<d[i]<<" ";
        }
        cout<<endl;
    return 0;
}
// 7 8
// 1 2 6
// 1 3 1
// 1 4 8
// 1 5 3
// 1 6 5
// 2 5 2
// 3 4 3
// 5 6 1