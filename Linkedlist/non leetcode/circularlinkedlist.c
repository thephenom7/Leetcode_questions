#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *last=NULL;
void insertatbeg(int val)
{
	struct node *p=(struct node*)malloc(sizeof(struct node));
	if(last==NULL)
	{
		p->data=val;
		last=p;
		p->next=p;
	}
	else
	{
		p->data=val;
		p->next=last->next;
		last->next=p;
	}
}
void insertatend(int val)
{
	struct node *p=(struct node*)malloc(sizeof(struct node));
	if(last==NULL)
	{
		p->data=val;
		last=p;
		p->next=p;
	}
	else
	{
		p->data=val;
		p->next=last->next;
		last->next=p;
		last=p;
	}
}
void insertatmid(int val,int iva)
{
	struct node *p=(struct node*)malloc(sizeof(struct node));
	if(last==NULL)
	{
		p->data=val;
		last=p;
		p->next=p;
	}
	else if(last->data==iva)
	{
		p->data=val;
		p->next=last->next;
		last->next=p;
		last=p;
	}
	else
	{
		struct node *temp=last->next;
		struct node *p=(struct node*)malloc(sizeof(struct node));
		if(last==NULL)
		{
		p->data=val;
		last=p;
		p->next=p;
		}
		else
		{
		while(temp->data!=iva && temp!=last)
		{
			temp=temp->next;
		} 
		if(temp==last)
		{
			printf("\nKey not found");
		}
		else if(temp->data==iva)
		{
			p->data=val;
			p->next=temp->next;
			temp->next=p;	
		}
		}
	}
}
void deleteatbeg()
{
	
	if(last==NULL)
	{
		printf("Underflow\n");
	}
	else if(last==last->next)
	{
		struct node *temp=last;
		free(temp);
		last=NULL;
	}
	else
	{
		struct node *temp=last->next;
		last->next=temp->next;
		free(temp);
	}
}
void deleteatend()
{
	if(last==NULL)
	{
		printf("Underflow\n");
	}
	else if(last==last->next)
	{
		struct node *temp=last;
		free(temp);
		last=NULL;
	}
	else
	{
	struct node *temp=last->next;
	struct node *ptr=last;
	while(temp->next!=last)
	{
		temp=temp->next;
	}
	temp->next=last->next;
	last=temp;
	free(ptr);
	}
	
}
void deleteatany(int key)
{
	if(last==NULL)
	{
		printf("Underflow \n");
	}
	else if(last==last->next)
	{
		struct node *temp=last;
		free(temp);
		last=NULL;
	}
	else if((last->next)->data==key)
	{
		struct node *temp=last->next;
		last->next=temp->next;
		free(temp);
	}
	else
	{
	struct node *temp=last->next;
	struct node *ptr;
		while(temp->data!=key && temp!=last)
		{
			ptr=temp;
			temp=temp->next;
		}
		if(temp->data==key && temp==last)
		{
			ptr->next=last->next;
			last=ptr;
			free(temp);
		}
		else if(temp->data==key)
		{
			ptr->next=temp->next;
			free(temp);
		}
	}
}
void traverse()
{
	struct node *temp=last->next;
	if(last==NULL)
	{
		printf("Empty\n");
	}
	else
	{
	
	while(temp!=last)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("%d\n ",last->data);
}
}
void main()
{
	int ch=1,se,val,key;
	printf("SELECT THE OPERATION\n");
	while(ch==1)
	{
		printf("1.INSERT AT BEG\n2.INSERT AT END\n3.INSERT AT ANY\n4.DELETE AT BEG\n5.DELETE AT END\n6.DELETE AT ANY\n7.TRAVERSE\n");
		scanf("%d",&se);
		switch(se)
		{
			case 1:printf("Enter the value to be inserted at beginning\n");
					scanf("%d",&val);
					insertatbeg(val);
					break;
			case 2:printf("Enter the value to be inserted at end \n");
					scanf("%d",&val);
					insertatend(val);
					break;
			case 3:printf("Enter the value to be inserted \n");
					scanf("%d",&val);
					printf("Enter the key\n");
					scanf("%d",&key);
					insertatmid(val,key);
					break;
			case 4:printf("Element deleted \n");
					deleteatbeg();
					break;
			case 5:printf("element deleted \n");
					deleteatend();
					break;
			case 6:printf("Enter the key");
					scanf("%d",&key);
					deleteatany(key);
					break;
			case 7:traverse();
					break;			
		}
		printf("Do you want to continue ");
		scanf("%d",&ch);
	}
}
