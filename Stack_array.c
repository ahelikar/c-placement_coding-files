#include<stdio.h>
#include<stdlib.h>
# define size 100
int stack[size];
int top=-1;
void push(int value)
{
  if(top==size-1)
   {
     printf("Stack overflowed! CANNOT PUSH NEW ELEMENT\n")
        }
   else
     {
       top++;
       stack[top]=value;
       printf("Pushed element %d into the stack\n",stack[top]);
        }
void pop()
{
  if(top==-1)
    {
      printf("Stack is empty\n");
    }
   else {
    printf("The element popped is %d\n",stack[top]);
   }
}
void peek()
{
  if(top==-1){
    printf("Stack has no element\n");
  }
  else {
     printf("The top element is %d\n" ,stack[top]);
  }
}
void display()
{
  if(top==-1){
    printf("Stack is empty\n");
  }
else {
    printf("Stack elements\n");
    for(int i=top;i>=0;i--)
       {
         printf("%d",stack[i]);
       }
printf("\n");
}
}
int main {
  push(10);
  push(20);
  push(30);
  push(40);
  display();
  peek();
  pop();
  display();
  pop();
  pop();
  pop();
  return 0;
}


