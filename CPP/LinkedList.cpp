#include<iostream>
using namespace std;

class node{
    public:
    int value;
    node*next;
    };

void printList(node *n){
    while(n!=NULL){
        cout<<n->value<<endl;
        n=n->next;
    }
}

void insertAtTheFront(node **head,int newvalue){
    node *newnode =new node();
    newnode->value=newvalue;
    newnode->next=*head;
    *head=newnode;

}

int main(){

    node *head= new node();
    node *second=new node();
    node *third=new node();

    head->value=1;
    head->next=second;
    second->value=2;
    second->next=third;
    third->value=3;
    third->next=NULL;

    cout<<"The values of Linked List are : "<<endl;

    insertAtTheFront(&head,-1);
    printList(head);

 return 0;

}
