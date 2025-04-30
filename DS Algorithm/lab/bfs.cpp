#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int queue[SIZE], front = -1, rear = -1;
int visited[SIZE];
void enqueue(int value)
{
    if (rear == SIZE - 1)
        return;
    if (front == -1)
        front = 0;
    queue[++rear] = value;
}
int dequeue()
{
    if (front == -1 || front > rear)
        return -1;
    return queue[front++];
}
void bfs(int graph[SIZE][SIZE], int n, int start)
{
    int i;
    enqueue(start);
    visited[start] = 1;
    while (front <= rear)
    {
        int current = dequeue();
        printf("%d ", current);
        for (i = 0; i < n; i++)
        {
            if (graph[current][i] && !visited[i])
            {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}
int main()
{
    int n, i, j, start;
    int graph[SIZE][SIZE];
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);
    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);
    printf("BFS traversal: ");
    bfs(graph, n, start);
    return 0;
}