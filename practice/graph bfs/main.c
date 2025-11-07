#include <stdio.h>

int queue[20];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(rear == -1)
    {
        front = 0;
    }
    rear = rear + 1;
    queue[rear] = x;
}

int dequeue()
{
    int x;
    x = queue[front];
    front = front + 1;
    return x;
}

int main()
{
    int n;
    int a[20][20];
    int visited[20];
    int i;
    int j;
    int start;
    int node;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    printf("Enter starting vertex (0 to n-1): ");
    scanf("%d", &start);

    enqueue(start);
    visited[start] = 1;

    printf("BFS: ");

    while(front <= rear)
    {
        node = dequeue();
        printf("%d ", node);

        for(j = 0; j < n; j++)
        {
            if(a[node][j] == 1 && visited[j] == 0)
            {
                enqueue(j);
                visited[j] = 1;
            }
        }
    }

    return 0;
}
