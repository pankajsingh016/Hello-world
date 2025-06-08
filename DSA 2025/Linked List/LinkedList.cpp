#include<bits/stdc++.h>
using namespace std;

// single linked list
struct node{
    int data;
    struct node* next;
};


//doublelinkelist
struct dnode{
    int data;
    struct dnode* next;
    struct dnode* prev;
};


class Node{
    public:
        int data;
        Node *next;
    
    Node(){
        data = 0;
        next = NULL;
    }

    Node(int val){
        data = val;
        next = NULL;
    }


};

class LinkedList{
    Node *head;

    public:
        LinkedList(){
            head = nullptr;
        }

    
        void insertHead(int data)
        {
            Node *newNode = new Node(data);

            if(head==nullptr){
                head = newNode;
                return;
            }

        }

};



int main(){
  node a;
  a.data = 20;
  node b;
  b.data = 30;
  a.next = &b;

  cout << a.data << " --> " << a.next->data;

    return 0;
}