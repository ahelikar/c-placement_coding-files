#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
}
struct Node*temp=NULL;
void push(int value){
  struct Node*Newnode=(struct Node*)malloc(sizeof(struct Node))
  if (newNode==NULL){
     printf("Stack Overflow!");
  }
  newNode->data=data;
  newNode->next=top;
  top=newNode;
   printf("Pushed %d into the top",data);
}
void pop() {
    if (top==NULL) {
        printf("Stack is empty.UNDERFLOW!");
    }
    else  {
        struct Node*temp=top;
        printf("Popped %d from the stack\n",top->data);

    }
    top=top->data;
    free(temp);
}
}
void peek() {
  if(top==NULL) {
    printf("Stack is empty .No element is inside")
      }
   else {
      printf("Stack elements:");
      struct Node*temp=top;
      while(temp!=NULL) {
        printf("%d",temp->data);
      }
      temp=temp->next;}
    printf("\n");
}
int main() {
  push(10);
  push(20);
  push(30);
  push(40);
  display();
  peek();
  pop();
  display()
  pop();
  pop();
return 0;
}
