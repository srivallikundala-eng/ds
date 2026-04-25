#include<stdio.h>
int queue[100],n,i,x,rear=-1,front=-1,ch;
void insert();
void delete();
void display();
int main()
{
	printf("\nenter queue size:");
	scanf("%d",&n);
	printf("QUEUE OPERATIONS 1.INSERT 2.DELETE 3.DISPLAY 4.EXIT");
	do
	{
		printf("\nenter your choice..");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert();
			        break;
			case 2: delete();
			        break;
			case 3: display();
			        break;
		    case 4: printf("exit from the queue");
			        break;
			default : printf("Invalid choice\n");
		}
	}while(ch!=4);
	return 0;
}
void insert()
{
	if(rear==n-1)
	{
		printf("Queue is full");
	}
	else
	{
		printf("enter element:");
		scanf("%d",&x);
		rear++;
		queue[rear]=x;
		printf("element inserted\n");
	}
}
void delete()
{
	if(front==rear)
	{
		printf("Queue is empty");
	}
	else
	{
		front++;
		printf("the deleted element =%d",queue[front]);
	}
}
void display()
{
	if(front==rear)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("Queue elements are...:");
		for(i=front+1;i<=rear;i++)
		printf("%d ",queue[i]);
	}
}
