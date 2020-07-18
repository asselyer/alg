#include<iostream>

using namespace std;



int main(){
    int a[100][100], d[100];
    int n,m;
    cin>>n>>m;
    for(int i = 1; i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j){
                a[i][j]=10000000;
            }
        }
    }
    for(int i=1;i<=m;i++){
        int x,y,w;
        cin>>x>>y>>w;
        a[x][y]=w;
        a[y][x]=w;
    }
    // l->k=0;
    // k->j=10;
    // i->j 10000000;
    for(int k=1;k<=n;k++){
        for(int i = 1; i<=n;i++){
            for(int j=1;j<=n;j++){
                if((i!=j)&& (a[i][k]+a[k][j] < a[i][j])){
                   
                    a[i][j]=a[i][k]+a[k][j];
                    
                }
                
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==10000000){
                a[i][j]=-1;
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
