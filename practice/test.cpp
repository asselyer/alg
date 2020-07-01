#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

struct Person {
    string name;
    string surname;
    int age;
};

int main(){
    // int x = 5;
    // double pi = 3.14;
    // bool log_val = false;
    // char symbol = 'Z';

    // string hw = "Hello, world!";
    // vector<int> nums = {1, 2, 4, 7};

    // map<string, int> name_to_val;
    // name_to_val["one"] = 1;
    // name_to_val["two"] = 2;
    // cout<<"two is "<<name_to_val["two"];

    vector<Person> staff;
    staff.push_back({"Ivan", "Ivanov", 25});
    staff.push_back({"Assel", "Yernazarova", 21});

    cout<<staff[1].name;
     
    return 0;
}