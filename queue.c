#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int front=-1,rear=-1,maxsize;
int queue[100];
int main()
{
int choice;
printf("\n enter the size of the queue:");
scanf("%d",&maxsize);
printf("\n1.insert\n2.delete\n3.display\n4.exit");
while(choice!=4)
{
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:printf("\n enter valid choice??\n");
}
}
return 0;
}
void enqueue()
{
int item;
printf("\n enter the element\n");
scanf("\n%d",&item);
if(rear==maxsize-1)
{
printf("\n OVERFLOW\n");
return;
}
if(front==-1&&rear==-1)
{
front=0;
rear=0;
}
else
{
rear=rear+1;
}
queue[rear]=item;
printf("\nvalue inserted");
}
void dequeue()
{
int item;
if(front==-1||front>rear)
{
printf("\nUNDERFLOW\n");
return;
}
else
{
item=queue[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=front+1;
}
printf("\nvalue deleted");
}
}
void display()
{
int i;
if(rear==-1)
{
printf("\n empty queue\n");
}
else
{
printf("\nelements in the queue are\n");
for(i=front;i<=rear;i++)
{
printf("\n%d",queue[i]);
}
}
}

