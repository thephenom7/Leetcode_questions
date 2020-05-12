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
    cout<<"Enter the value to be inserted (-1)if not\n";
    int x;
    cin>>x;
    if(x==-1)
    {
        return NULL;
    }
    node *p=new node;
    p->data=x;
    cout<<"enter the values for the left child of "<<x<<"\n";
    p->left=create();
    cout<<"enter the values for the right child of "<<x<<"\n";
    p->right=create();
    return p;
}
void inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    node *root=create();
    inorder(root);

}