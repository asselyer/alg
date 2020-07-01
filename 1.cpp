#include<iostream>
#include<stack>

using namespace std;

//Stack FILO-LIFO push pop top empty size
int main(){
    stack<int> st;
    st.push(5);
    st.push(10);
    st.push(15);
    //cout<<st.size();
    //cout<<st.top();
    st.push(20);
    st.push(25);
    st.pop();
    //cout<<st.top();
    cout<<st.top();
    return 0;
}
//top->newNode
//push() newNode->next=top
//pop() top=top->next