#include<stdio.h>
#include<stdlib.h>
// Definition of a Node in a singly linked list
struct Node {
    int data;          
    struct Node* next;
};


struct Node* newNode(int data) // Function to create a new Node
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

/*Operations on Singly Linked List
Traversal
Searching
Length
Insertion:
  -Insert at the beginning
  -Insert at the end
  -Insert at a specific position
Deletion:
  -Delete from the beginning
  -Delete from the end
  -Delete a specific node*/
  void traverseLinkedList(struct Node* head)
  {
    struct Node* current = head;
    while(current != NULL){
      printf("%d",current->data);
      current = current->next;
    }
    printf("\n");
  }