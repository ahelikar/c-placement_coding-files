/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#define size 100
int front=-1,rear=-1,a[size];
void front_insert(int z)
{
    if((rear+1)%size==front)
    {
        printf("\nNo insertion is possible");
    }
    else if(front ==-1)
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
    if((rear+1)%size==front)
    {
        printf("Queue is full\n");
    }
    else if(front==-1)
    {
        rear=0;
        a[rear]=z;
    }
    else
    {
        rear=((rear+1)%size);
        a[rear]=z;
    }
    
    
}
void front_dequeue()
{
    if(front==-1)
    {
        printf("There is no element inside the queue\n");
    }
    else
    {
                printf("The deleted element from front end is %d\n",a[front]);

        
    
    if(front ==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front=(front+1)%size;
    }
}
}
    
    
void rear_dequeue()
{
    if(front==-1)
    {
        printf("\nThere is no element inside the queue");
    }
    else 
    {
        printf("The deleted element from rear end is%d\n",a[rear]);
        if(front==rear)
        {
            front=rear=-1;
        }
        else if(rear==0)
        {
          rear=size-1;  
        }
        else
    {
        rear=rear-1;
    }
    }
    
    
}
void display()
{
    
    printf("\nElements inside the double-ended queue are: ");
    if(front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }
    int i = front;
    while(i != rear)
    {
        printf("%d ", a[i]);
        i = (i + 1) % size;
    }
    printf("%d\n", a[rear]);
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
