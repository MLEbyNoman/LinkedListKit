#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;

    }
};
class DDL{
public:
    Node* head;
    Node* tail;

    DDL (){
        head = tail = nullptr;
    } 

    void push_front(int val){
        Node* newnode = new Node(val);
        if(head == nullptr){
            head = newnode;
        }else {
    
            newnode->next= head;
            head->prev = newnode;
            head = newnode;
        }
    }

    void push_back(int val){
        Node* newnode = new Node(val);
        if(head == nullptr){
            head = tail=  newnode;
        }else {
    
            tail->next= newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    void display(){
        if(head==nullptr){
            cout<<"List is empty: "<<endl;
            return;
        }else{
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<endl;
    }
  }

  void pop_front(){
    Node* temp = head;
    head = head->next;
    if(head != nullptr){
        head->prev=nullptr;
        temp->next=nullptr;
        delete temp;
    }
  }
  void pop_back(){
    Node* temp = tail;
    tail = tail->prev;
    if(head != nullptr){
        tail->next=nullptr;
        temp->prev=nullptr;
        delete temp;
    }
  }
};
int main(){
    DDL d1;

    //d1.push_front(45);
    //d1.push_front(645);

    d1.push_back(95);
    d1.push_back(875);
    d1.push_back(975);
    d1.push_back(775);

    d1.pop_front();
    //d1.pop();

    d1.display();

    return 0;
}