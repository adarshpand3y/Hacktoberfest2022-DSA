#include <bits/stdc++.h>
using namespace std;
class Treenode
{
public:
    int data;
    Treenode *left;
    Treenode *right;

    Treenode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// creating tree by recursion

Treenode *createTree(Treenode *root)
{
    int d;
    cout << "enter data" << endl;
    cin >> d;
    root = new Treenode(d);
    if (d == -1)
        return NULL;

    cout << "enter data for left" << endl;
    root->left = createTree(root->left);
    cout << "enter data for right" << endl;
    root->right = createTree(root->right);

    return root;
}
vector<vector<int>> levelOrder(Treenode *root)
{
    if (!root)
        return {};
    vector<vector<int>> level;
    queue<Treenode *> q;
    q.push(root);
    vector<int> temp;
    while (q.size() != 0)
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            root = q.front();
            q.pop();
            if (root->left)
                q.push(root->left);
            if (root->right)
                q.push(root->right);
            temp.push_back(root->data);
        }
        level.push_back(temp);
        temp.clear();
    }
    reverse(level.begin(), level.end());
    return level;
}

int main()
{
    Treenode *root = NULL;
    root = createTree(root);
    cout << "levelordertraversal traversal is:" << endl;
    vector<vector<int>> levels;
    levels = levelOrder(root);
    for (auto level : levels)
    {
        for (auto i : level)
        {
            cout << i << " ";
        }
        cout << '\n';
    }
}
