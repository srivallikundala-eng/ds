#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue()
{
	struct node *new_n;
	int d;
	new_n=(struct node*)malloc(sizeof(struct node));
	printf("\n enter an element");
	scanf("%d",&d);
	new_n->data=d;
	new_n->next=NULL;
	if((front==NULL)&&(rear==NULL))
	{
		front=rear=new_n;
	}
	else
	{
		rear->next=new_n;
		rear=new_n;
	}
}
void dequeue()
{
	struct node *temp;
	if((front==NULL)&&(rear==NULL))
	{
		printf("\n queue is empty");
	}
	else
	{
		printf("\n delete node is %d",front->data);
		front=front->next;
		free(temp);
	}
}
void display()
{
struct node *temp;
if((front==NULL)&&(rear==NULL))
{
	printf("\n queue is empty");
}
else
{
	temp=front;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
}
void main()
{
	int ch;
	while(1)
	{
		printf("\n\t\t\t queue eperations are");
		printf("\n\t\t\t\t 1.insert");
		printf("\n\t\t\t\t 2.delete");
		printf("\n\t\t\t\t 3.display");
		printf("\n\t\t\t\t 4.exit");
		printf("\n\t enter your choice::");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();          break;
			case 2:dequeue();          break;
			case 3:display();           break;
			case 4:exit(0);              break;
			default:printf("\n invalid choice ,try again");
		}
	}
}

