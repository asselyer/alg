#include<iostream>
#include<vector>
#include<string>

using namespace std;
// 1 2 3 4 5 6

int Factorial(int x){
    int res= 1;
    if(x>0){
        for(int i=1;i<=x;i++){
            res*=i;
        }
        return res;
    }
    return res;
}
int main(){
    int a;
    cin>>a;
    cout<<Factorial(a);
    return 0;
}
// int Factorial(int x) {
//   if (x <= 1) {
//     return 1;
//   } else {
//     return x * Factorial(x - 1);  // вычисляем факториал от x-1 и умножаем на x
//   }
// }