#include<iostream>
#include<string>

using namespace std;

bool IsPalindrom(string asd){
    string check="";
    for(int i=asd.length()-1;i>=0;i--){
        check+=asd[i];
    }
    if(asd==check){
        return true;
    }
    return false;
}
int main(){
    string word;
    cin>>word;
    cout<<IsPalindrom(word);
    return 0;
}