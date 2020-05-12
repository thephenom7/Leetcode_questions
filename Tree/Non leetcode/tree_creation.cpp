#include<bits/stdc++.h>
node *create()
{
    int x;
    cout<<endl<<"Enter the value to be inserted :";
    cin>>x;
    if(x!=-1){
    node *p=new node;
    p->data=x;
    p->left=create();
    p->right=create();
    }

}
struct node {
    int data;
    node *left;
    node *right;
};
int main()
{
    node *root=create()
}