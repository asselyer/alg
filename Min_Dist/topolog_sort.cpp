#include<iostream>

using namespace std;

bool b[100];
int a[100][100],d[100];
int n,m,nd;
void Dfs(int v){
    b[v]=1;
    for(int i=1;i<=n;i++)
        if((a[v][i]==1) && (!b[i]))
            Dfs(i);
        
    
    
    nd++;
    d[nd]=v;
    
    //cout<<v<<" ";
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
        //a[y][x]=1;
    }
    for(int i=1;i<=n;i++){
        if(!b[i]){
            Dfs(i);
        }
    }
    for(int i=nd;i>=1;i--){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    //Dfs(1);
    return 0;
}