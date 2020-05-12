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
int fullnode(node* t)
{
    if(!t)
        return 0;
    if(!t->left || !t->right)
        return 0;
    return (fullnode(t->left)+fullnode(t->right)+((t->left && t->right)?1:0));
}
int main()
{
    node *root=create();
    preorder(root);
    cout<<endl<<"fullnods in tree is :"<<fullnode(root);
}