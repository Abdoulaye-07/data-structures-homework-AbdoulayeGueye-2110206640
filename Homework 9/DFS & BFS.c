/*
Student Name: ABDOULAYE GUEYE
Student ID: 2110206640
Homework 5
Topic: Doubly Linked List
*/

#include <stdio.h>

int graph[10][10], visited[10], n;

void dfs(int v) {
    visited[v] = 1;
    printf("%d ", v);
    for(int i = 0; i < n; i++)
        if(graph[v][i] && !visited[i])
            dfs(i);
}

void bfs(int start) {
    int q[10], f = 0, r = 0;
    visited[start] = 1;
    q[r++] = start;

    while(f < r) {
        int v = q[f++];
        printf("%d ", v);
        for(int i = 0; i < n; i++)
            if(graph[v][i] && !visited[i]) {
                visited[i] = 1;
                q[r++] = i;
            }
    }
}

int main() {
    printf("Enter vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("DFS: ");
    dfs(0);

    for(int i = 0; i < n; i++) visited[i] = 0;
    printf("\nBFS: ");
    bfs(0);

    return 0;
}
