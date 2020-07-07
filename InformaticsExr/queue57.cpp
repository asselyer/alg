#include <iostream>

using namespace std;
//Queue FIFO 
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Queue{
    public:
    Node *frnt;
    Node *tail;
    long sz;
    int str[100000];

    Queue(){
        frnt = NULL;
        tail = NULL;
        sz = 0;

    }

    void push(int data){
        Node *nn = new Node(data);
        if(sz<=100){
            if (tail == NULL){
                tail = nn;
                frnt = nn;
            }
            else{
                nn->next = tail;
                tail->prev = nn;
                tail=nn;
                // tail->next=nn;
                // tail = tail->next;
            }
        sz++;
        }
    }
    void pop(){
        if (frnt !=NULL){
            cout<<frnt->data<<endl;
            //frnt = frnt->next;
            frnt=frnt->prev;
            //frnt ->next = NULL;
            sz--;
        }
        else{
            cout<<"error"<<endl;
        }

        
    }
    void front(){
        if (frnt !=NULL){
            cout<<frnt->data<<endl;
        }
        else{
            cout<<"error"<<endl;
        }

 
    }
    void clear(){
        sz=0;
        frnt = NULL;
        tail = NULL;

    }
    int size(){
        return sz;
    }
    bool empty(){
        if(sz==0)
            return true;
        return false;
    }
};

int main(){
    Queue *queue = new Queue();
    string x;
    long n;
    while(cin>>x){
        if(x=="push"){
            cin >> n;
            queue->push(n);
            cout<<"ok "<<endl;
    
        }
        else if(x=="pop"){
            queue->pop();
        }
        else if(x=="front"){
            queue->front();
        }
        else if(x=="clear"){
            queue->clear();
            cout<<"ok"<<endl;
        }
        else if(x=="size"){
            cout<<queue->size()<<endl;
        }
        else if(x=="exit"){
            cout<<"bye"<<endl;
            break;
        }
    }
    return 0;
}
