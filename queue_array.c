#include<stdio.h>
#include<stdlib.h>
#define size 100
int front=-1,rear=-1,a[size];
void front_insert(int z)
{
    if(front==0 && rear==size-1)
    {
        printf("\nNo insertion is possible");
    }
    else if(front ==-1||rear==-1)
    {
        front=rear=0;
        a[front]=z;
    }
    else if(front==0)
    {
        front=size-1;
        a[front]=z;
    }
    else
    {
        front=front-1;
        a[front]=z;
    }
}
void rear_insert(int z)
{
    if(front==0||rear==size-1)
    {
        printf("Queue is full\n");
    }
    else if(front==-1||rear==-1)
    {
        rear=0;
        a[rear]=z;
    }
    else if(rear==size-1)
    {
        rear=0;
        a[rear]=z;
    }
    else
    {
        rear++;
        a[rear]=z;
    }
    
    
    }
void front_dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("There is no element inside the queue\n");
    }
    else if(front ==rear)
    {
        printf("The deleted element from front end is %d\n",a[front]);
        front=-1;
        rear=-1;
    }
    else if (front==size-1)
    {
        printf("The deleted element front is %d",a[front]);
        front=0;
        
    }
    else{
        printf("The deleted element from front is%d",a[front]);
        
    }
}
void rear_dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("\nThere is no element inside the queue");
    }
    else if(front==rear)
    {
        printf("The deleted element from rear node is %d",a[rear]);
    }
    else if(rear==0)
    {
        printf("The deleted element from rear node is %d",a[rear]);
        rear=size-1;
    }
    else
    {
        printf("The deleted element from rear node is %d",a[rear]);
        rear=rear-1;
    }
    
    
    
}
void display()
{
    printf("\nElements inside the double ended queue are ");
    while(front!=rear)
    {
        for(int i=0;i<size;i++)
        {
            printf("%d",a[i]);
        }
        front=(front+1)%size;
    }
    printf("%d",a[rear]);
}
int main()
{
    front_insert(-5);
    front_insert(23);
    front_insert(17);
    rear_insert(24);
    rear_insert(13);
    display();
    front_dequeue();
    rear_dequeue();
    display();
    return 0;
}
