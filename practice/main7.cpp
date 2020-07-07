#include<iostream>
#include<string>
#include<vector>

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
vector<string> PalindromFilter(vector<string> words,int length){
    // string check="";
    // string check1="";
    // string wordf="";

    vector<string> res;
    vector<string> res2;
    for(string ss:words){
        if(ss.length()>=length && IsPalindrom(ss)){
            res.push_back(ss);
        }
    }
    return res;
    // for(int n=0;n<words.size();n++){
    //     for(int i=words[n].length()-1;i>=0;i--){
    //         check+=words[n][i];
            
    //     }
    //     wordf=check;
    //     res.push_back(check);
    //     check="";

    //     if(words[n]==wordf && wordf.length()>=length){
    //         res2.push_back(words[n]);
    //     }          
    // }
    // for(string s:res2){
    //    check1+=s+" ";
    // }
    // return res2;
    
}
int main(){
    vector<string> words;
    int length;

    vector<string> res1 = PalindromFilter({"weew", "bro","code","alla"},4);

    for(string s:res1){
        cout<<s+" ";
    }
    
    return 0;
}