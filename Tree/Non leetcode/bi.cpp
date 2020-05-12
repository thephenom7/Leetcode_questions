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
void levelorder(node *root)
{
    node * temp=root;
    queue <node *> lq;
    lq.push(temp);
    while(!lq.empty())
    {
        if(lq.front()->left!=nullptr)
        {
            lq.push(lq.front()->left);
        }
        if(lq.front()->right!=nullptr)
        {
            lq.push(lq.front()->right);
        }
        cout<<lq.front()->data<<" ";
        lq.pop();
    }

}
int main()
{
    node *root=create();
    levelorder(root);

}