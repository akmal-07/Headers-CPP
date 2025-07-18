#ifndef Stack_H
#define Stack_H

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};

struct Stack{
    Node *TOP;
    
    Stack(){
        TOP = nullptr;
    }
    
    
    }
    void push(int value){
        Node* newnode = new Node(value);
        newNode->next = TOP;
        TOP = newnode;
    }
    
    void pop(){
        if (TOP == nullptr){
            cout << "Stack underflow" << endl;
        }
        else{
            Node* temp = TOP;
            int value = temp->data;
            TOP = TOP->next;
            delete temp;
            delete value;
        }
    }
    void peek(){
        if(TOP == nullptr){
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return TOP->data;
    }
    
    bool isEmpty(){
        return TOP == nullptr;
    }
};

#endif
