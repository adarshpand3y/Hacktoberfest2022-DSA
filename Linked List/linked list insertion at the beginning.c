#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* add(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;
    
    ptr->next=head;
    head=ptr;
    return head;
}

int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=76;
    head->next=NULL;
    
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=54;
    temp->next=NULL;
    
    head->next=temp;
    
    head=add(head,65);
    temp=head;
    while(temp!=NULL){
        printf("%d \n",temp->data);
        temp=temp->next;
    }
    return 0;
}
