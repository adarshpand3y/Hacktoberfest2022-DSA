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

//creating tree by level order input
//enter -1 for null node

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
        
        cout<<"enter data for left of "<<front->data<<endl;
        int left,right;
        cin>>left;
        if(left!=-1){
        front->left=new Treenode(left);
        q.push(front->left);
        }
        cout<<"enter data for right of "<<front->data<<endl;
        cin>>right;
        if(right!=-1){
        front->right=new Treenode(right);
        q.push(front->right);
        }
    }
}


//function for calculating height of tree

int height(Treenode* node){

        if(node==NULL) 
        {
            return 0;
        }
        else 
        {
            return max(height(node->left),height(node->right))+1;
        }
    }

int main()
{
    Treenode* root=NULL;
    createbylevelorder(root);
    cout<<"Height of the Binary Tree is : "<<height(root)<<endl;
}

/*    
      1
     /  \
    2    3
    
*/