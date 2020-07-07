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
        cout<<"ok"<<endl;
    }
    void pop(){
        if(top!=NULL){
            top = top->next;
            sz--;
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
    Node *topElement(){
        return top;
    }
};
int main(){
    Stack *st = new Stack();
    cout<<st->size()<<endl;
    st->push(10);
    cout<<st->size()<<endl;
    st->push(20);
    cout<<st->size()<<endl;
    st->push(5);
    cout<<st->size()<<endl;
    // cout << st->top->next->data<<endl ;
    // cout << st->size() << endl;
    // cout << st-> empty();

    return 0;
}

