#include<bits/stdc++.h>

using namespace std;
class Treenode{
    public:
      int data;
      Treenode* left;
      Treenode* right;

      Treenode(int data){
          this->data=data;
          this->left=NULL;
          this->right=NULL;
      }
};

//creating tree by recursion

Treenode* createTree(Treenode* root)
{
    int d;
    cout<<"enter data"<<endl;
    cin>>d;
     root=new Treenode(d);
     if(d==-1) return NULL;

    cout<<"enter data for left"<<endl;
    root->left=createTree(root->left);
    cout<<"enter data for right"<<endl;
    root->right=createTree(root->right);

    return root;
}

//creating tree by level order input

void createbylevelorder(Treenode* &root)
{
    cout<<"enter data for root node"<<endl;
    int d;
    cin>>d;
    if(d==-1) {
        root=NULL;
        return;
    }
    root=new Treenode(d);

    queue<Treenode*> q;
    q.push(root);

    while(!q.empty())
    {
        Treenode* front=q.front();
        q.pop();
        
        cout<<"enter data for left of"<<front->data<<endl;
        int left,right;
        cin>>left;
        if(left!=-1){
        front->left=new Treenode(left);
        q.push(front->left);
        }
        cout<<"enter data for right of"<<front->data<<endl;
        cin>>right;
        if(right!=-1){
        front->right=new Treenode(right);
        q.push(front->right);
        }
    }
    
}


void levelordertraversal(Treenode* root)
{
    queue<Treenode*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Treenode* root=q.front();
        q.pop();

        if(root==NULL){
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
        else{
            cout<<root->data;
            if(root->left) q.push(root->left);
            if(root->right) q.push(root->right);
        }
    }
}
int main()
{
    Treenode* root=NULL;
/*
root=createTree(root);
    cout<<"level order traversal is:"<<endl;
    levelordertraversal(root);
    cout<<"inordertraversal traversal is:"<<endl;
    inordertraversal(root);     
    cout<<endl;
    cout<<"preorder traversal is:"<<endl;
    preordertraversal(root);
    cout<<endl;
    cout<<"postorder traversal is"<<endl;
    postordertraversal(root);
    */
   createbylevelorder(root);
   cout<<"levelordertraversal is"<<endl;
   levelordertraversal(root);
}
//1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
