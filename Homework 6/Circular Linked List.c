/*
Student Name: ABDOULAYE GUEYE
Student ID: 2110206640
Week: 4
Topic: Doubly Linked List
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int data) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = data;

    if(head == NULL) {
        head = n;
        n->next = head;
        return;
    }

    struct Node* temp = head;
    while(temp->next != head)
        temp = temp->next;

    temp->next = n;
    n->next = head;
}

void traverse() {
    if(head == NULL) return;

    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while(temp != head);
}

int main() {
    insert(1);
    insert(2);
    insert(3);
    traverse();
    return 0;
}
