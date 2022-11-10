#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node*left;
    struct node*right;

     node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};

void preorder(struct node* node){
    if(node==NULL){
        return;
    }
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}

void inorder(struct node* node){
    if(node==NULL){
        return;
    }
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

void postorder(struct node* node){
    if(node==NULL){
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}

int main(){
   struct node* node=new struct node(1);
   node->left=new struct node(2);
   node->right=new struct node(3);
   node->left->left=new struct node(4);
   node->left->right=new struct node(5);
   node->right->left=new struct node(6);
   node->right->right=new struct node(7);
//    preorder(node);
//    inorder(node);
      postorder(node);
   return 0;
}