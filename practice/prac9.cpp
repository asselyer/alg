#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<chrono>

using namespace std;
using namespace std::chrono;

struct Person{
    string name;
    string surname;
    int age;
};
vector<Person> GetMoscowPopulation();

void PrintPopulationlSize(const vector<Person>& p){
    cout<<"There are "<<p.size()<<" people"<<endl;
}
int main(){
    auto start = steady_clock::now();
    vector<Person> people = GetMoscowPopulation();
    auto finish = steady_clock::now();
    cout<<"GetAlmatyPopulation "<<duration_cast<milliseconds>(finish-start).count()<<" ms"<<endl;

    start = steady_clock::now();
    PrintPopulationlSize(GetMoscowPopulation());
    finish = steady_clock::now();
    cout<<"PrintPopulationSize "<<duration_cast<milliseconds>(finish-start).count()<<" ms"<<endl;
    
    return 0;
}