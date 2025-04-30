
#include <stdio.h>

#include <stdlib.h>

#define SIZE 100

int queue [SIZE], front =-1,rear =-1;
int visited [SIZE];

 int visited[SIZE];
void enqueue(int value)
{
    if (rear == SIZE - 1)
        return;
    if (front == -1)
        front = 0;
    queue[++rear] = value;
}
int dequeue (){

    if (front ==-1 || front > rear)
    return -1;
    return queue[front++];

}

void bfs(int graph[SIZE][SIZE], int n, int start){
    int i;
    enqueue(start);
    visited[start] = 1;
    while (front <= rear )
    {
        int current = dequeue();
        printf("%d ", current);
        for (i = 0; i < n; i++)
        {
            if (graph[current][i] && !visited[i]){
                enqueue(i);
                visited[i]= 1;
            }

        }
    }
}
/*
int knapsack(int weights[], int values[], int n, int W)
{
    int dp[n + 1][W + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {

            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weights[i - 1] <= w)
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]],
                               dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][W]; 
}

*/
/*
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        
        

        for (int j = 0; j < n - i - 1; j++) {
            
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                
            }
        }

       
       
    }
} */
int main()
{
    int n, i, j, start;
    int graph[SIZE][SIZE];
    printf("Enter number of Locations: ");
    scanf("%d", &n);
    printf("Enter roads between location u and v:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);
    printf("Enter starting location : ");
    scanf("%d", &start);
    printf("Visited locations : ");
    bfs(graph, n, start);

    // qstn 2 :
    
    // int n = sizeof(values) / sizeof(values[0]);
    // printf("Maximum value: " , knapsack(weights, values,n, W) );








}























