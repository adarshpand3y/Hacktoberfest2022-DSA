#include<iostream>
using namespace std;
class node{
   public:
      int data;
      node*next;
      node(int d);
      data=d;
      next= NULL;
   }
};
void insertAthead(node*&head, int data){
   node*n= new node(data);
   n->next= head;
   head= n;
}
void print(node*head){
   while(head!=NULL){
      cout<<head->data<<"->";
      head= head->next;
   }
}
int main(){
   node*head= NULL;
   insertAthead(head,5);
   insertAthead(head,2);
   insertAthead(head,8);
   insertAthead(head,3);
   print(head);
}
