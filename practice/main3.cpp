#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string fw;
    int count = 0;
    cin>>fw;
   
    for(int i=0;i<fw.length();i++){
        
        if(fw[i]=='f'){
            count++; 
            if(count>=2){
                cout<<i;
                break;  
            }
        }
    }
    if(count==1){
        cout<<-1;
        
    }
    else if(count==0){
        cout<<-2;
            
    }
        
    
    
    return 0;
}