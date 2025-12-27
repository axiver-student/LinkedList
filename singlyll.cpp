#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node *next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class list{
    public:

    Node *head;
    Node *tail;

    list(){
        head=tail=NULL;
    }
    public:

    void push_front(int val){
        Node *newnode = new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return ;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    void push_back(int val){
        Node *newnode = new Node(val);
        if(tail==NULL){
            tail=newnode;
            head=newnode;
            return;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    void pop_front(){
        Node* temp=head;
        if(head==NULL){
            cout<<"lisked list empty";
            return;
        }

        if(head == tail){
        delete head;
        head = tail = NULL;
        return;
        }
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        Node *temp=head;
        while(temp->next!=tail){ //temp->next->next!=NULL which point to previous node
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
        

    }

    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

};

int main(){

    list sl;
    sl.push_front(10);
    sl.push_front(20);
    sl.push_front(30);
    sl.push_front(40);
    sl.push_front(50);

    
    sl.push_back(5);
    sl.push_back(0);
    
    sl.display();

    cout<<endl;

    sl.pop_front();
    sl.pop_front();

    sl.display();

    sl.pop_back();
    sl.pop_back();
    cout<<endl;
    sl.display();

    sl.push_back(100);
    cout<<endl;
    sl.display();



   

return 0;
}