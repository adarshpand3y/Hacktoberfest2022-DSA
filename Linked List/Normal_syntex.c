#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};


void count(struct node*head){
    int count=0;
    if(head==NULL){
        printf("empty");
    }
    struct node*ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
    }
    printf("no. of nodes is %d\n",count);
}

void print(struct node*head)
{
    struct node*ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("data is %d\n",ptr->data);
        ptr=ptr->next;
    }
}

void add(struct node*head, int data){
    struct node *ptr, *temp;
    ptr=head;
    
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
}

int main()
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=76;
    head->next=NULL;
   
   struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=65;
    temp->next=NULL;
    head->next=temp;
    
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=8;
    temp->next=NULL;
    head->next->next=temp;
    
    int a;
    printf("enter the number want to add :");
    scanf("%d",&a);
    add(head,a);
    
    print(head);
    
    count(head);
    
    return 0;
}
