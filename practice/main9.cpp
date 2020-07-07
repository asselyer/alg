#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
void QueueCheck(vector<string>& v, vector<int>& v1){
    vector<int> check;
    // for(auto ss:v){
    //     if(ss=="COME"){
            
    //     }
    // }
    int count=0;
    for(int j=0;j>v.size();j++){
        if(v[j]=="COME" && v1[j]>0){
            for(int jj=1;jj>=v1[j];jj++){
                check.push_back(jj);
            }
        }
        else if(v[j]=="COME" && v1[j]<0){
            for(int jj=1;jj>=v1[j]*(-1);jj++){
                check.pop_back();
            }
        }
        else if(v[j]=="WORRY"){
            v1[j]=0;
        }
        else if( v[j]=="WORRY_COUNT"){
            for(int h=0;h<j;h++){
                if(v1[h]==0){
                    count++;
                }
            }
            cout<<count;
        }
    }
}

int main(){
    int n;
    cin>> n;
    vector<string> q(n);
    vector<int> nn;
    int i = 1;
    while(i<=n){
        string s;
        int as;
        cin>> s >> as;

        q.push_back(s);
        nn.push_back(as);
        ++i;
    }
    // for(string in:q && int ini:nn){
    //     cin>>in>>ini;
    //     cout<<s<<" ";
    // }

    QueueCheck(q,nn);
    return 0;
}