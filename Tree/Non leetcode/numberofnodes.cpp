#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *create()
{
    int x;
    cout<<"Enter element (-1 if not)"<<endl;
    cin>>x;
    if(x!=-1)
    {
        node *p=new node; 
        p->data=x;
        cout<<"Enter the left child of "<<x<<endl;
       p->left=create();
        cout<<"Enter the right child of "<<x<<endl;
       p->right=create();
       return p;
    }
    return NULL;
}
void preorder(node *t)
{
    if(t!=nullptr)
    {
        cout<<t->data<<endl;
        preorder(t->left);
        preorder(t->right);
    }       
}
int noofnodes(node *t)
{
    if(!t)
        return 0;
    return 1+noofnodes(t->right)+noofnodes(t->left);
}
int main()
{
    node *root=create();
    preorder(root);
    cout<<endl<<"Nodes in tree is :"<<noofnodes(root);
}