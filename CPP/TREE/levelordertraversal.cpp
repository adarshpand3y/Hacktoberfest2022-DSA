#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    public:
     node(int value){
         data=value;
         left=NULL;
         right=NULL;
     }
};

void traversal(node* root){
     queue<node*> q;
     q.push(root);
     while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            node* n=q.front();
            q.pop();
            cout<<n->data<<" ";
            if(n->left){
                q.push(n->left);
            }
            if(n->right){
                q.push(n->right);
            }
        }
        cout<<endl;
     }
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    traversal(root);
}