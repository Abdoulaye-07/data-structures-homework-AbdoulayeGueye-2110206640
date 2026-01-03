/*
Student Name: ABDOULAYE GUEYE
Student ID: 2110206640
Week: 11
Topic: Graph Cluster
*/

#include <stdio.h>


int graph[5][5] = {
{0,1,0,0,0},
{1,0,1,0,0},
{0,1,0,0,0},
{0,0,0,0,1},
{0,0,0,1,0}
};


int visited[5];


void dfs(int v) {
visited[v] = 1;
printf("%d ", v);
for(int i = 0; i < 5; i++)
if(graph[v][i] && !visited[i])
dfs(i);
}


int main() {
for(int i = 0; i < 5; i++) {
if(!visited[i]) {
printf("Cluster: ");
dfs(i);
printf("\n");
}
}
return 0;
}
