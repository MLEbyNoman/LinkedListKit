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
    Node* head;
   
    s1(){
        head = nullptr;
    }
    void push_front(int val){
       Node* newnode = new Node(val);
       if(head == nullptr){
         head  = newnode;
       }else{
           newnode->next = head;
           head = newnode;
       }
       
    }

    void reverse(){
        Node* upcoming = head;
        Node* curr = nullptr;
        Node* prev = nullptr;
        while(upcoming != nullptr){
              prev = curr;
              curr = upcoming;
              upcoming = upcoming->next;
              curr->next = prev;
        }
        head = curr;
    }
    void removeduplicate(){
        Node* p = head;
        Node* q = head->next;
        while(q != nullptr){
        if(p->data != q->data){
            p = q;
            q = q->next;
        }else{
            p->next = q->next;
            delete q;
            q= p->next;
        }
    }
 }

 
    void display(){
        Node* temp = head;
        if(temp == nullptr){
            cout<<"list is empty:";
        }else{
            while(temp != nullptr ){
                cout<<temp->data<<"<->";
                temp= temp->next;
            }
            cout<<"NULL: "<<endl;
        }
     
   }
};
int main(){
    s1 s;
    s.push_front(23);
    s.push_front(33);
    s.push_front(43);
    s.push_front(53);
    s.push_front(53);

    
    s.display();

    s.reverse();

    s.display();

    s.removeduplicate();

    s.display();
}
