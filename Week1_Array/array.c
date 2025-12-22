#include <stdio.h>


int main() {
int arr[100] = {10, 20, 30, 40, 50};
int n = 5, i, pos, value;


// Traversal
printf("Array Traversal:\n");
for(i = 0; i < n; i++)
printf("%d ", arr[i]);


// Insertion
pos = 2;
value = 99;
for(i = n; i > pos; i--)
arr[i] = arr[i - 1];
arr[pos] = value;
n++;


printf("\nAfter Insertion:\n");
for(i = 0; i < n; i++)
printf("%d ", arr[i]);


// Deletion
pos = 3;
for(i = pos; i < n - 1; i++)
arr[i] = arr[i + 1];
n--;


printf("\nAfter Deletion:\n");
for(i = 0; i < n; i++)
printf("%d ", arr[i]);


return 0;
}
