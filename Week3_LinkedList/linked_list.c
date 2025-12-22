/*
Student Name: ABDOULAYE GUEYE
Student ID: 2110206640
Week: 3
Topic: Linked List
*/

#include <stdio.h>
struct Node {
int data;
struct Node* next;
};


struct Node* createNode(int data) {
struct Node* newNode = malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = NULL;
return newNode;
}


void traverse(struct Node* head) {
while(head != NULL) {
printf("%d -> ", head->data);
head = head->next;
}
printf("NULL\n");
}


struct Node* insertFront(struct Node* head, int data) {
struct Node* newNode = createNode(data);
newNode->next = head;
return newNode;
}


struct Node* insertEnd(struct Node* head, int data) {
struct Node* newNode = createNode(data);
if(head == NULL) return newNode;
struct Node* temp = head;
while(temp->next != NULL)
temp = temp->next;
temp->next = newNode;
return head;
}


struct Node* deleteNode(struct Node* head, int key) {
struct Node *temp = head, *prev = NULL;
if(temp != NULL && temp->data == key) {
head = temp->next;
free(temp);
return head;
}
while(temp != NULL && temp->data != key) {
prev = temp;
temp = temp->next;
}
if(temp == NULL) return head;
prev->next = temp->next;
free(temp);
return head;
}


int main() {
struct Node* head = NULL;
head = insertFront(head, 10);
head = insertEnd(head, 20);
head = insertEnd(head, 30);
traverse(head);
head = deleteNode(head, 20);
traverse(head);
return 0;
}
