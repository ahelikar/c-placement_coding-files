"""
C code to implement stack using array
"""
#The code 
// Online C compiler to run C program online
#include <stdio.h>
#define size 100
int top=-1,a[size];
void push_stack(int value)
{
    if(top>size-1)
    {
        printf("Stack is full.No space left for entering element");
    }
    else 
    {
        a[++top]=value;
     printf("The element pushed at top is %d\n",value);
     
    }
    
    
}
void pop(int value)
{
    if (top<0)
    {
        printf("Stack underflow");
      
        
    }
    else
    {
        a[top--]=value;
        printf("The element popped is %d\n",value);
    }
}
void peek(int value)
{
    if(top<0)
    {
        printf("Stack underflow");
        
    }
    else
    {
        a[top]=value;
        printf("%d\n",value);
    }
}
void display()
{
    if(top<0)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Stack elements are");
        for(int i=0;i<top;i++)
        {
            printf("%d\n",a[i]);
        }
    }
}


int main() {
    
    push_stack(20);
    push_stack(30);
    push_stack(40);
    display();
    printf("Element popped\n");
    pop(30);
    display();
    printf("Element peeked\n");
    peek(20);
    
    
    
    

    return 0;
}
