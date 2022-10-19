#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

struct node
{
    int data;
    struct node *next;

};
struct node *last;
struct node* create_node();

struct node* addatbeg(struct node *last,float value)
{
   struct node *temp;
   temp=create_node();
   temp->data=value;
   last=temp;
   last->next = last;
   return(last);
}


struct node* create_node()
{
    struct node *n;
    n=new node;
    return n;
}

void display(struct node *last)
{
    struct node *t;
    if (last==NULL)
        cout<<"list is empty";
    else
    {
        t=last->next;
        do{
            cout<<t->data;
            t=t->next;

        }while(t!=last->next);
    }

}

int main()
{   float value;
    cout<<"enter the value to be inserted at the beginning";
    cin>>value;
    last=addatbeg(last,value);
    display(last);

    return 0;

}
