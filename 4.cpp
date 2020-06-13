#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int data){
        this->data = data;
        this->nextnext = NULL;
        this->prev = NULL;
    }
};

class Queue{
    public:
    Node *front;
    Node *tail;
    int sz;

    Queue(){
        front = NULL;
        tail = NULL;
        sz = 0;

    }

    void push(int data){
        Node *nn = new Node(data);
        if (tail == NULL){
            tail = nn;
            front = nn;
        }
        else{
            nn->next = tail;
            tail->prev = nn;
            tail = nn;
        }
    }
    void pop(){
        if (front !=NULL){
            front = front->prev;
            front ->next = NULL;
            sz--;
        }
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
    queue->push(10);
    queue->push(20);
    queue->
    return 0;
}
