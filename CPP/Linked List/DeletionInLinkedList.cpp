//Implementation of Linked List and Insertion of Elements
#include<iostream>
#include<conio.h>
using namespace std;
struct Node{
	int data;      // representation of list
	Node* next;
};
struct Node* head;
void insertAtHead(int x){
	Node* temp = new Node; //creation of a node
	temp->data = x;
	if(head == NULL){
		temp->next = NULL;
		head = temp;
	}
	else{
	temp->next = head;
	head = temp;
	}
}
void insertAtTail(int x){
	Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;
	Node* temp1 = head;
	while(temp1->next!=NULL){
		temp1 = temp1->next;// link traversal
	}
	temp1->next = temp;
}
void insertAtN(int x, int n){
	Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;
	if(n == 1){
		temp->next = head;
		head = temp;
	}
	else{
	Node* temp1 = head;
	for(int i=0; i<n-2; i++){
		if(temp1->next == NULL){
			cout<<"Position can't be found and element can't be added"<<endl;
			return;
			}
	temp1 = temp1->next;
		}
	temp->next = temp1->next;
	temp1->next = temp;
	}
}
void display(){
	Node* temp = head;
	cout<<"LIST : ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;  // list traversal
	}
	cout<<endl;
}
void deleteAtHead(){
	Node *temp = head;
	head = head->next;
	delete temp;
}
void deleteAtTail(){
	Node *temp = head;
	while(temp->next->next!=NULL){
	temp = temp->next;
	}
	temp->next = NULL;
}
void deleteAtN(int n){
	Node *temp = head;
	if(n == 1){
		head = temp->next;
		delete temp;
		return;
	}
	for(int i=0; i<n-2; i++){
			if(temp->next->next == NULL){
			cout<<"Position out of bound\n";
			return;
		}
		temp = temp->next;
	}
//	Node *temp1 = temp->next;
	temp->next  = temp->next->next;
//	delete temp1;
}
int main(){
	head = NULL; // empty list creation
	insertAtHead(4);
	display();
	insertAtHead(8);
	display();
	insertAtTail(5);
	display();
	insertAtN(3,1);
	display();
	insertAtN(4,2);
	display();
	insertAtN(2,6);
	display();
	insertAtN(4,9);
	display();
	deleteAtHead();
	display();
	deleteAtTail();
	display();
	deleteAtN(5);
	display();
	deleteAtN(3);
	display();
}
