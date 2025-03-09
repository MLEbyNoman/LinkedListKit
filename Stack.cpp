#include <iostream>
using namespace std;

class Node{
public:
     int data;
     Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};
class s1{
public:
     Node* top;

    s1() {
        top = nullptr;
    }

void push_front(int val){
     Node* temp = new Node(val);
     if(top == nullptr){
        top=temp;
     }else{
        temp->data=val;
        temp->next = top;
        top= temp;
     }
  }

  int pop(){

    int x = -1;
     if(top == nullptr){
        cout<<"stack is empty: ";
     }else{
        Node* temp = top;
        top = top->next;
        x = temp->data;
        delete temp;
     }
     return x;
  }
  void display() {
      if(top == nullptr){
        cout<<"stack is empty: "<<endl;
        return;
      }
      Node* temp = top;
      while(temp != nullptr){
      cout<<temp->data<<" ";
      temp = temp->next;
      }
      //cout<<endl;
  }
  
};
int main(){
    s1 S;
    S.push_front(12);
    S.push_front(22);
    S.push_front(32);
    S.push_front(42);
    S.push_front(52);

    S.pop();

    S.display();

    return 0;
}