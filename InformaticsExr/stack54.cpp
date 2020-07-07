#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node (int data){
        this->data = data;
    }
};

class Stack {
    public:
    Node *top;
    int sz;

    Stack(){
        top = NULL;
        sz = 0;
    }
    void push(int data){
        Node *newN = new Node(data);
        newN->next = top;
        top = newN;
        //top=bdo
        sz++;
    }
    void pop(){
        if(top!=NULL){
            cout<<top->data<<endl;
            top = top->next;
            sz--;
        }else
            cout<<"error"<<endl;
    }
    void back(){
        if(top!=NULL){
            cout<<top->data<<endl;
        }
        else
        {
            cout<<"error"<<endl;
        }
        
    }
    int size(){
        return sz;
    }
    bool empty(){
        if(sz ==0 )
            return true;
        return false;
    }
    void clear(){
        sz=0;
        top = NULL;

    }
    Node *topElement(){
        return top;
    }
};
int main(){
    Stack *st = new Stack();
    string x;
    int n;
    while(cin>>x){
        if(x=="push"){
            cin >> n;
            st->push(n);
            cout<<"ok "<<endl;
        }
        else if(x=="pop"){
            st->pop();
        }
        else if(x=="back"){
            st->back();
        }
        else if(x=="clear"){
            st->clear();
            cout<<"ok"<<endl;
        }
        else if(x=="size"){
            cout<<st->size()<<endl;
        }
        else if(x=="exit"){
            cout<<"bye";
            break;
        }
    }

    return 0;
}

