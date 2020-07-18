#include<iostream>

using namespace std;

struct data{
    int v,d;
};

data q[100];
int c[100];
int a[100][100];
int n, nq;
bool b[100];

int main(){
    int n, m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
    }

    q[1].v=4;
    q[1].d=0;
    b[4]=1;
    nq=1;
    int i=0;
    while(i<nq){
        i++;
        cout<<q[i].v<<" "<<q[i].d<<endl;
        int v = q[i].v;
        int d = q[i].d;
        for(int j=1;j<=n;j++){
            if((a[v][j]==1)&&(!b[j])){
                nq++;
                q[nq].v=j;
                q[nq].d=d+1;
                b[j]=1;
            }
        }
    }


    return 0;
}
