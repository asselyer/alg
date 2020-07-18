#include<iostream>

using namespace std;
int h[1000];
int v[1000];
int s[1000];
int n=0;
int j=0;
int a;

void heapUp(int p){
    while(p>1){
        if(h[p/2]<h[p]){
            //swap(h[p/20,h[p]]);
            int c = h[p];
            h[p]=h[p/2];
            h[p/2]=c;
        }
        else
        {
            break;
        }
        p=p/2;     
    }
    //cout<<h[p]<<" ";
    //j++;
    //s[j]=h[p];
    
}
void heapDown(int p){
    // s[j]=h[1];

    //cout<<h[1]<<" ";
    //h[1]=h[a];
   // cout<<h[1]<<" ";
    //h[1]=h[a];
    int max_e=1;

    
    
    int l = p*2;
    int r = p*2+1;
    //cout<<h[l]<<" "<<h[r]<<" ";

    if(r<=a && h[r]>h[p] && h[r]>h[p]){
        //swap(h[r],h[p]);
        int g = h[p];
        h[p]=h[r];
        h[r]=g;
        heapDown(r);
    }
    if(l<=a && h[l]>h[p] && h[l]>h[p]){
        //swap(h[l],h[p]);
        int b = h[p];
        h[p]=h[l];
        h[l]=b;
        heapDown(l);
    }
    //s[j]=h[1];
    // if(h[p]<=h[max_e]){
        
    // }
   // cout<<h[l]<<" "<<h[r]<<" ";
    
    // else{
    //     b = a--;
    //     h[j]=h[b];
    // }
}
void insert(int x){
    n++;
    h[n]=x;
    heapUp(n);
    
}
int main(){
    //int y=1;
    cin>>a;
    int size=a;
    for(int i=1;i<=a;i++){
        cin>>v[i];
    }

    for(int t =1;t<=a;t++){
        insert(v[t]);
    }
    //heapDown(1);
    // int y=a;
    // while(y<a){
    //     y--;
    //     heapDown(1);

    // }
    // a=y;
    s[j]=h[1];
    for(int k=a;k>=1;k--){  
        //j++;
        
        //s[j]=h[1];
        //cout<<h[k]<<endl;
        //size--;
        //size--;
        //h[j]=h[1];
        h[1]=h[k];
        h[k]=0;
        
        heapDown(1);
        j++;
        s[j]=h[1];
        // j++;

    }
   //cout<<heapDown(a)<<"";
    for(int l =0;l<a;l++){  
        cout<<s[l]<<" ";
    }
    
    return 0;
}