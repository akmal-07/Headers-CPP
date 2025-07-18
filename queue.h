#ifndef Queue_H
#define Queue_H

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

struct Queue{
    Node *front;
    Node *rear;
    
    Queue(){
        front = rear = nullptr;
    }
    
    void insert(int value){
        Node* newnode = new Node(value);
        if(rear == nullptr){
            front = rear = newnode;
        }else{
        rear->next = newnode;
        rear = newnode;
        }
        
    }
    
    int remove(){
        if (rear == nullptr || front ==nullptr){
            cout << "Queue Underflow" << endl;
            return -1;
        }
        else{
            Node* temp = front;
            int value = front->data;
            front = front->next;
            if(front == nullptr) rear =nullptr;
            delete temp;
            return value;
        
            
        }
    }
    
    int getrear(){
        if(rear == nullptr){
            cout <<"Queue is Empty" << endl;
            return -1;
        }
        return rear->data;
    }
    
    bool isEmpty(){
        return front == nullptr;
    }
};
