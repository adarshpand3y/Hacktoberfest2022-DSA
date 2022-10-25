#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

 struct node* add(struct node *ptr,int data){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
     
    ptr->next=temp;
    
    return temp;
 }

int main()
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=76;
    head->next=NULL;
    
    struct node *ptr=head;
    ptr=add(ptr,65);
    ptr=add(ptr,54);
    ptr=add(ptr,32);
    
    ptr=head;
    
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}
