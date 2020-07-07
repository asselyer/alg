#include <iostream>

using namespace std;
//linked list 
class Node {
    public:
    int data;
    
    Node *prev;
    Node *next;

    Node(int data) {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

class LinkedList {
    public:
    Node *front;
    Node *tail;
    int sz;
    LinkedList() {
        front = NULL;
        tail = NULL;
        sz = 0;
    }

    void pushFront(int data) {
        Node *nn = new Node(data);
        if (front == NULL) {
            front = nn;
            tail = nn;
        } else {
            front->next = nn;
            nn->prev = front;
            front = nn;
        }
    }

    void popFront() {
        if (front != NULL) {
            front = front->prev;
            if (front == NULL)
                tail = NULL;
            else 
                front->next = NULL;
        }
    }

    void pushBack(int data) {
        Node *nn = new Node(data);
        if (tail == NULL) {
            front = nn;
            tail = nn;
        } else {
            nn->next = tail;
            tail->prev = nn;
            tail = nn;
        }
    }

    void popBack() {
        if (tail != NULL) {
            tail = tail->next;
            if (tail == NULL)
                front = NULL;
            else 
                tail->prev = NULL;
        }
    }

    void push(Node *a, Node *c) {
        Node *b = a->next;
        if (b == NULL) {
            pushFront(c->data);
        } else {
            a->next = c;
            c->prev = a;
            c->next = b;
            b->prev = c;
        }
    }

    void pop(Node *a) {
        if (a->next == NULL)
            popFront();
        else if (a->prev == NULL)
            popBack();
        else {
            Node *c = a->prev;
            Node *b = a->next;
            c->next = b;
            b->prev = c;
        }
    }

    void find(int data) {
        Node *p=front;
        do{
            if(front->data==data){
                cout<<p<<" "<<front->data<<endl;
                break;
            }
            p=p->next;
            cout<<"no match";
        }
        while(front->next!=NULL);

    }
};

int main() {
    LinkedList *ll = new LinkedList();
    Node *a1 = new Node(10);
    Node *c1 = new Node(14);
    ll->pushFront(10);
    ll->pushFront(15);
    ll->push(a1,c1);
    ll->pushFront(20);
    ll->find(20);
    //cout<<ll->tail->next->next->data << endl;
    return 0;
}