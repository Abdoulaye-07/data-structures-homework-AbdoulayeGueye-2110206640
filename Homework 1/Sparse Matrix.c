/*
Student Name: ABDOULAYE GUEYE
Student ID: 2110206640
Homework 1
Topic: Doubly Linked List
*/

#include <stdio.h>

int main() {
    int r, c, i, j, count = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    printf("Enter matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    printf("\nSparse Matrix Representation:\n");
    printf("Row  Col  Value\n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(mat[i][j] != 0) {
                printf("%d    %d    %d\n", i, j, mat[i][j]);
                count++;
            }
        }
    }

    printf("Total non-zero elements: %d\n", count);
    return 0;
}
