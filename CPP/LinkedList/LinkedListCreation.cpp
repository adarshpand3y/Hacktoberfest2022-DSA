#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int data;
        Node *next;

    // Creating a constructor for the Node

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
int main(){

    Node *node1 = new Node(20);     // Intilizing value in node with 20 as the constructor is created 

    cout<<node1->data<<endl;
    cout<<node1->next<<endl;


return 0;
}