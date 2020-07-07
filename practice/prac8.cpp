#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// void Swap(int& x, int& y){
//     int tmp = x;
//     x = y;
//     y = tmp;
// }
void Sort(vector<int>& v ){
    sort(begin(v), end(v));
}
int main(){
    vector<int> nums = {3, 5, 7, 2};
    Sort(nums);
    for(auto n:nums){
        cout<< n<<" ";
    }
    return 0;
}