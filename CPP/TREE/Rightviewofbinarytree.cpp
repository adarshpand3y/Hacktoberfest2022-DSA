#include<bits/stdc++.h>
using namespace std;

class node{
    public:
     int data;
     node* left;
     node* right;
    
    node(int value){
        data = value;
        left=NULL;
        right=NULL;
    }
};

void rightview(node* root){
     queue<node*> q;
     q.push(root);
     while(!q.empty()){
         int n=q.size();
         for(int i=0;i<n;i++){
             node* current=q.front();
             q.pop();
             if(i==n-1)  cout<<current->data<<endl;
             if(current->left!=NULL) q.push(current->left);
             if(current->right!=NULL) q.push(current->right);     
         }
     }
    
}

int main(){
  node* root= new node(1) ;
  root->left=new node(2);
  root->right=new node(3);
  root->left->left=new node(4);
  root->left->right=new node(5);
  root->right->left=new node(6);
  root->right->right=new node(7);
  rightview(root);

}