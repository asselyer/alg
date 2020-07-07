#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<chrono>

using namespace std;
void PrintVector(const vector<bool>& v){
    int i =0;
    for(auto s:v){
        cout<< i<<": "<<s<<endl;
        ++i;
    }
}
int main(){
    vector<bool> is_holiday(28,false);
    is_holiday[22]=true;
    PrintVector(is_holiday);
    is_holiday.assign(31,false);
    is_holiday[7]=true;
    //is_holiday.resize(31);
    PrintVector(is_holiday);
    is_holiday.clear();
    return 0;
}