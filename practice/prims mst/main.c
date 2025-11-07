#include <stdio.h>

int main()
{
    int n;
    int a[20][20];
    int visited[20];
    int i;
    int j;
    int min;
    int u;
    int v;
    int cost = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost adjacency matrix:\n");
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

    visited[0] = 1;

    printf("Edges selected:\n");

    for(i = 1; i < n; i++)
    {
        min = 999;
        for(u = 0; u < n; u++)
        {
            if(visited[u] == 1)
            {
                for(v = 0; v < n; v++)
                {
                    if(a[u][v] < min && visited[v] == 0 && a[u][v] != 0)
                    {
                        min = a[u][v];
                        cost = cost + min;
                        printf("%d - %d = %d\n", u, v, a[u][v]);
                        visited[v] = 1;
                    }
                }
            }
        }
    }

    printf("Total Cost = %d\n", cost);

    return 0;
}
