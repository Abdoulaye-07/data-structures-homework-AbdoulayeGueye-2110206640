/*
Student Name: ABDOULAYE GUEYE
Student ID: 2110206640
Homework 5
Topic: Doubly Linked List
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* head = NULL;

void insert(int data) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = data;
    n->prev = NULL;
    n->next = head;
    if(head != NULL)
        head->prev = n;
    head = n;
}

void delete(int key) {
    struct Node* temp = head;
    while(temp && temp->data != key)
        temp = temp->next;

    if(temp == NULL) return;

    if(temp->prev)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if(temp->next)
        temp->next->prev = temp->prev;

    free(temp);
}

void traverse() {
    struct Node* temp = head;
    while(temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    delete(20);
    traverse();
    return 0;
}
