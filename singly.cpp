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
class SL{
public:
    Node* head;
    Node* tail;

    SL() {
         head = tail = nullptr;
    }

    void push_front(int val){
       Node* newnode = new  Node(val);
       if(head == nullptr){
          head = newnode;
       }else{
           newnode->next = head;
           head = newnode;
       }
    }

    void pop_front(){
        if(head == nullptr){
            cout<<"head is null: ";
            return;
        }else{
            Node* temp = head;

            head=head->next;
            delete temp;
        }
    }
    void pop_back(){
        if(head == nullptr){
            cout<<"head is null: ";
            return;
        }else{
            Node* temp = head;
        while(temp->next != tail){
              temp = temp->next;
        
        }
          temp->next = nullptr;
          delete tail;
          tail = temp;
    }
}
    void display(){
        if(head == nullptr){
           cout<<"list is empty: ";
           return;
        }else{
            Node* temp = head;
            while(temp != nullptr){
                  cout<<temp->data<<" ->";
                  temp=temp->next;

        }
          cout<<endl;
    }
  }
};
int main(){
    SL s1;

    s1.push_front(75);
    s1.push_front(85);
    s1.push_front(65);
    s1.push_front(95);

    s1.pop_front();

    //s1.pop_back();

    s1.display();

    return 0;
}