#include<iostream>

using namespace std;



int main(){
    int a[100][100], d[100];
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y,w;
        cin>>x>>y>>w;
        a[x][y]=w;
        a[y][x]=w;
    }

    for(int k=1;k<=n;k++){
        for(int i = 1; i<=n;i++){
            for(int j=1;j<=n;j++){
                if((a[i][k]>0)&&(a[k][j]>0)&&(i!=j)){
                    if((a[i][k]+a[k][j] < a[i][j])||(a[i][j]==0)){
                        a[i][j]=a[i][k]+a[k][j];
                    }
                }
                
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
