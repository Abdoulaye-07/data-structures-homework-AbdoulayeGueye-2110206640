/*
Student Name: ABDOULAYE GUEYE
Student ID: 2110206640
Homework 4
Topic: Doubly Linked List
*/

#include <stdio.h>

void maxHeapInsert(int heap[], int *n, int val) {
    int i = (*n)++;
    heap[i] = val;

    while(i != 0 && heap[(i-1)/2] < heap[i]) {
        int temp = heap[i];
        heap[i] = heap[(i-1)/2];
        heap[(i-1)/2] = temp;
        i = (i-1)/2;
    }
}

void printHeap(int heap[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", heap[i]);
}

int main() {
    int heap[20], n = 0, x;

    printf("Enter elements (-1 to stop):\n");
    while(1) {
        scanf("%d", &x);
        if(x == -1) break;
        maxHeapInsert(heap, &n, x);
    }

    printf("Max Heap: ");
    printHeap(heap, n);
    return 0;
}
