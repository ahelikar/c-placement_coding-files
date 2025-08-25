""" ***
Write a program in C to convert a string into a single linked list
***
"""
#The code
// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct Node{
    char data;
    struct Node*next;
};
struct Node*createNode(char value)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL)
    {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}
struct Node*stringToLinkedList(const char*str)
{
    if(str==NULL||*str=='\0'){
        return NULL;
    }
    struct Node*head=NULL;
    struct Node*current=NULL;
    head=createNode(str[0]);
    current=head;
    for(int i=1;str[i]!='\0';i++)
    {
        current->next=createNode(str[i]);
        current=current->next;
    }
    return head;
}
void printLinkedList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%c -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main() {
    const char* myString = "Hello";
    struct Node* myList = stringToLinkedList(myString);

    printf("Linked list created from string: ");
    printLinkedList(myList);

    // Free the allocated memory (important to prevent memory leaks)
    struct Node* temp;
    while (myList != NULL) {
        temp = myList;
        myList = myList->next;
        free(temp);
    }
    return 0;
    
    
}
