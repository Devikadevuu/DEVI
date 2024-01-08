#include <stdio.h>
#include <stdlib.h>
struct Node 
{
int data;
struct Node* next;
};
void printList(struct Node* head) 
{
while (head != NULL) 
{
printf("%d ", head->data);
head = head->next;
}
printf("\n");
}
struct Node* insertAtBeginning(struct Node* head, int value)
{
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = head;
return newNode;
}
struct Node* insertAtEnd(struct Node* head, int value) 
{
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;
if (head == NULL) 
{
return newNode;
}
struct Node* current = head;
while (current->next != NULL) 
{
current = current->next;
}
current->next = newNode;
return head;
}
struct Node* insertAtPosition(struct Node* head, int value, int position) 
{
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
if (position == 1) 
{
newNode->next = head;
return newNode;
}
struct Node* current = head;
for (int i = 1; i < position - 1 && current != NULL; i++) 
{
current = current->next;    
}
if (current == NULL) 
{
printf("Invalid position\n");
return head;
}
newNode->next = current->next;
current->next = newNode;
return head;
}
int main() {
struct Node* head = NULL;
int choice, value, position;
do 
{
printf("1. Insert at the beginning\n");
printf("2. Insert at the end\n");
printf("3. Insert at a specific position\n");
printf("4. Print the list\n");
printf("0. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) 
{
case 1:
printf("Enter the value to insert: ");
scanf("%d", &value);
head = insertAtBeginning(head, value);
break;
case 2:
printf("Enter the value to insert: ");
scanf("%d", &value);
head = insertAtEnd(head, value);
break;
case 3:
printf("Enter the value to insert: ");
scanf("%d", &value);
printf("Enter the position: ");
scanf("%d", &position);
head = insertAtPosition(head, value, position);
break;
case 4:
printf("Linked List: ");
printList(head);
break;
case 0:
printf("Exiting program.\n");
break;
default:
printf("Invalid choice. Try again.\n");
}
} 
while (choice != 0);
return 0;
}
