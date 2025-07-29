#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

'''This program reverses a linked list'''

struct Node*reverse(struct Node*head)
{
	struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;
    while(current!=NULL){
	
    next=current->next;
    current->next = prev;   
        prev = current;         
        current = next;         
    }
    return prev; 
}
struct Node* createNode(struct Node**head,int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next= *head;
    *head=newNode;
    return newNode;
}
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}


int main() {
    struct Node* head = NULL;

    
    createNode(&head, 4);
    createNode(&head, 3);
    createNode(&head, 2);
    createNode(&head, 1);

    printf("Original List: ");
    printList(head);

    head = reverse(head);

    printf("Reversed List: ");
    printList(head);

   
    return 0;
}
