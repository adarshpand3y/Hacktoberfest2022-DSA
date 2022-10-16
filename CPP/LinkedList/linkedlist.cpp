#include<iostream>
using namespace std;

// creating node for linked list
class node{
public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
    }

};

//function for inserting elements
void insertAtTail(node* &head, int val){
    node* n= new node(val);
    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
    
}
// function todisplay linked list elements 
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

}

int main(){
    node* head = NULL;

    //inserting LL elements
    insertAtTail(head,100);
    insertAtTail(head,200);
    insertAtTail(head,300);
    insertAtTail(head,400);
    insertAtTail(head,500);

    //displaying LL elements
    cout<<"Linked List :"<<endl;
    display(head);
    return 0;
}