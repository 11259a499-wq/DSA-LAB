#include <stdio.h>

#define MAX 20

int adj[MAX][MAX];
int visited[MAX];
int n;

void bfs(int start)
{
    int queue[MAX], front = 0, rear = 0;
    int visitedLocal[MAX] = {0};

    visitedLocal[start] = 1;
    queue[rear++] = start;

    printf("BFS traversal: ");

    while(front < rear)
    {
        int current = queue[front++];

        printf("%d ", current);

        for(int i = 0; i < n; i++)
        {
            if(adj[current][i] == 1 && !visitedLocal[i])
            {
                visitedLocal[i] = 1;
                queue[rear++] = i;
            }
        }
    }

    printf("\n");
}

void dfsUtil(int start)
{
    visited[start] = 1;
    printf("%d ", start);

    for(int i = 0; i < n; i++)
    {
        if(adj[start][i] == 1 && !visited[i])
        {
            dfsUtil(i);
        }
    }
}

void dfs(int start)
{
    for(int i = 0; i < n; i++)
        visited[i] = 0;

    printf("DFS traversal: ");
    dfsUtil(start);
    printf("\n");
}

int main()
{
    int edges, u, v, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (u v):\n");

    for(int i = 0; i < edges; i++)
    {
        scanf("%d %d", &u, &v);

        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    bfs(start);
    dfs(start);

    return 0;
}
