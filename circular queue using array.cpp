#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
 int queue[MAX_SIZE];
 int front=-1,rear=-1;
 int isFull()
{
   {
   	int data;
   	printf("\n enter element");
   	scanf("%d",&data);
   	if(isFull())
   	{
   		printf("queue over flow \n");
   		return ;
	}
	 if(front==-1)
	 {
	 	front=0;
	 }
	  rear=(rear+1)%MAX_SIZE;
	  queue[rear]=data;
	  printf("element
	return(rear+1)%MAX_SIZE==front;
}
  int isEmpty()
  {
  	return front==-1;
  }
   void enqueue() %d inserted \n",data);
   }
     void dequeue()
     {
     	if(isEmpty())
     	{
     	  printf("queue under flow \n");
		   return ;	
		}
		 int data = queue[front];
		 if(front==rear)
		 {
		 	front=rear=-1;
		 }
		  else
		  {
		  	front=(front+1)%MAX_SIZE;
		  }
		  printf("\n deleted element %d",data);
	 } 
	   void display()
	   {
	   	if(isEmpty())
	   	{
	   		printf("queue is empty \n");
	   		return;
		}
		  printf("queue elements are:");
		  int i= front;
		  while(i!=rear)
		  {
		  	printf("%d",queue[i]);
		  	i=(i+1)%MAX_SIZE;
	      }
	       printf("%d \n",queue[rear]);
	   }
	     int main()
	     {
	     	int ch;
	     	while(1)
	     	{
	     		printf("\n\t\t\t QUEUE OPERATIONS ARE");
	     		printf("\n\t\t\t\t1.insert");
	     		printf("\n\t\t\t\t2.delete");
	     		printf("\n\t\t\t\t3.disp");
	     		printf("\n\t\t\t\t4.exit");
	     		printf("\n\t\t enter your choice::");
	     		scanf("%d",&ch);
	     	  switch(ch)
	     	  {
	     	  	case  1:
	     	  		enqueue();
	     	  		break;
	     	    case 2:
	     	    	dequeue();
	     	    	break;
	     	    case 3:
				    display();
					break;
				case 4:
				    exit(0);
					break;
			    default:printf("invalid choice,try again");	
			  }
			}
			return 0;
		 }
