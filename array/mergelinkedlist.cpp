#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *l1=nullptr;
struct node *l2=nullptr;
void insertatbeg(struct node* &head,int val)
{
    node *p=new node();
    p->data=val;
    p->next=head;
    head=p;
}
void traverse(struct node* head)
{
   // cout<<head->data;
    struct node *temp=head;
    while(temp->next!=nullptr)
    {
        cout<<endl<<temp->data;
        temp=temp->next;

    }
    cout<<endl<<temp->data;
    /*if((((temp->next)->next)->next)==NULL)
    {
        cout<<"FUCK YOU";
    }
    cout<<temp->data<<(temp->next)->data<<((temp->next)->next)->data;*/
}
int main()
{
    insertatbeg(l1,5);
        insertatbeg(l1,6);
    insertatbeg(l1,7);
        insertatbeg(l2,10);
            insertatbeg(l2,13);
                insertatbeg(l2,100);


   // cout<<"hai";
   // traverse(l1);
   // traverse(l2);
        node *phead=NULL,*temp;
    if(l1==NULL)
       {cout<<" ";}     //return l2;
        else if(l2==NULL)
        {
            //return l1;
        }
        else
        {

            while(!l1 && !l2)
            {
                node *ptr=new node();
                if(!phead)
                {
                //node *ptr=new node();
                if(l1->data < l2->data)
                {
                                            ptr->data=l1->data;
                        ptr->next=NULL;
                        l1=l1->next;
                    temp->next=ptr;
                }
                else
                {
                                            ptr->data=l2->data;
                        ptr->next=NULL;
                        l2=l2->next;
                    temp->next=ptr;
                }
                    temp=ptr;
                }
                else
                {
                    phead=ptr;
                    temp=ptr;
                    if(l1->data <= l2->data)
                    {
                        ptr->data=l1->data;
                        ptr->next=NULL;
                        l1=l1->next;
                    }
                    else
                    {
                        ptr->data=l2->data;
                        ptr->next=NULL;
                        l2=l2->next;
                    }
                }
            }
            while(!l1)
            {
               node *ptr=new node();
                        ptr->data=l1->data;
                        ptr->next=NULL;
                        l1=l1->next;
                    temp->next=ptr;
                temp=ptr;
            }
            while(!l2)
            {
                               node *ptr=new node();
                        ptr->data=l2->data;
                        ptr->next=NULL;
                        l2=l2->next;
                    temp->next=ptr;
                temp=ptr;
                
            }
        }
        cout<<"hai";
        traverse(phead);
}