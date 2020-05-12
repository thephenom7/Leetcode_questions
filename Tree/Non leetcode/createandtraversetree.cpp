#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node* create()
{
    int op;
    cout<<endl<<"enter the data to be inserted ";
    cin>>op;
    if(op==-1)
        return nullptr;
    else
    {
        node *p=new node();
        p->data=op;
        cout<<endl<<"Enter the left  node of "<<op;
        p->left=create();
        cout<<endl<<"Enter the right  node of "<<op;
        p->right=create();
        return p;

    }
}
void inorder(node *root)
{
    if(root!=nullptr)
    {
    inorder(root->left);
    cout<<endl<<"   "<<root->data;
    inorder(root->right);
    }
    else
    {
        return;
    }
    
}
int main()
{
    node *root=create();
    inorder(root);
}