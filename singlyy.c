#include <stdio.h>
#include <stdlib.h>
struct node{
int info;
struct node* link;
};
struct node* start = NULL;
void createList()
{
if (start == NULL) {
int n;
printf("\nEnter the number of nodes: ");
scanf("%d", &n);
if (n != 0) {
int data;
struct node* newnode;
struct node* temp;
newnode = malloc(sizeof(struct node));
start = newnode;
temp = start;
printf("\nEnter number to be inserted : ");
scanf("%d", &data);
start->info = data;
for (int i = 2; i <= n; i++) {
newnode = malloc(sizeof(struct node));
temp->link = newnode;
printf("\nEnter number to be inserted : ");
scanf("%d", &data);
newnode->info = data;
temp = temp->link;
}
}
printf("\nThe list is created\n");
}
else
printf("\nThe list is already created\n");
}
void traverse()
{
struct node* temp;
if (start == NULL)
printf("\nList is empty\n");
else {
temp = start;
while (temp != NULL) {
printf("%d\n", temp->info);
temp = temp->link;
}
}
}
void insertAtFront()
{
int data;
struct node* temp;
temp = malloc(sizeof(struct node));
printf("\nEnter number to be inserted : ");
scanf("%d", &data);
temp->info = data;
temp->link = start;
start = temp;
}
void insertAtEnd()
{
int data;
struct node *temp, *head;
temp = malloc(sizeof(struct node));
printf("\nEnter number to be inserted : ");
scanf("%d", &data);
temp->link = 0;
temp->info = data;
head = start;
while (head->link != NULL) {
head = head->link;
}
head->link = temp;
}
void insertAtPosition()
{
struct node *temp, *newnode;
int pos, data, i = 1;
newnode = malloc(sizeof(struct node));
printf("\nEnter position and data :");
scanf("%d %d", &pos, &data);
temp = start;
newnode->info = data;
newnode->link = 0;
while (i < pos - 1) {
temp = temp->link;
i++;
}
newnode->link = temp->link;
temp->link = newnode;
}
void deleteFirst()
{
struct node* temp;
if (start == NULL)
printf("\nList is empty\n");
else {
temp = start;
start = start->link;
free(temp);
}
}
void deleteEnd()
{
struct node *temp, *prevnode;
if (start == NULL)
printf("\nList is Empty\n");
else {
temp = start;
while (temp->link != 0) {
prevnode = temp;
temp = temp->link;
}
free(temp);
prevnode->link = 0;
}
}
void deletePosition()
{
struct node *temp, *position;
int i = 1, pos;
if (start == NULL)
printf("\nList is empty\n");
else {
printf("\nEnter index : ");
scanf("%d", &pos);
position = malloc(sizeof(struct node));
temp = start;
while (i < pos - 1) {
temp = temp->link;
i++;
}
position = temp->link;
temp->link = position->link;
free(position);
}
}
void search()
{
int found = -1;
struct node* tr = start;
if (start == NULL) {
printf("Linked list is empty\n");
}
else {
printf("\nEnter the element you want to search: ");
int key;
scanf("%d", &key);
while (tr != NULL) {
if (tr->info == key) {
found = 1;
break;
}
else {
tr = tr->link;
}
}
if (found == 1) {
printf("Yes, %d is present in the list.\n", key);
}
else {
printf("No, %d is not present in the list.\n",key);
}
}
}
int main()
{
createList();
int choice;
while (1) {
printf("\n\t1 display\n");
printf("\t2 insertion at starting\n");
printf("\t3 insertion at end\n");
printf("\t4 insertion at any position\n");
printf("\t5 deletion of first element\n");
printf("\t6 deletion of last element\n");
printf("\t7 deletion of element at any position\n");
printf("\t8 Search an element in linked list\n");
printf("\t9 exit\n");
printf("\nEnter Choice :");
scanf("%d", &choice);
switch (choice)
{
case 1:
traverse();
break;
case 2:
insertAtFront();
break;
case 3:
insertAtEnd();
break;
case 4:
insertAtPosition();
break;
case 5:
deleteFirst();
break;
case 6:
deleteEnd();
break;
case 7:
deletePosition();
break;
case 8:
search();
break;
case 9:
exit(1);
break;
default:
printf("Incorrect Choice\n");
}
}
return 0;
}
