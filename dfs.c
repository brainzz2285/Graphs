#include<stdio.h>

void DFS (int);
int visited[10],n=8;	//n is no of vertices and graph is sorted in array G[10][10]

// see dfsc.jpg to understand the below adjacency matrix
 int G[8][8] = { {0,1,1,1,1,0,0,0},
  {1,0,0,0,0,1,0,0},
  {1,0,0,0,0,1,0,0},
  {1,0,0,0,0,0,1,0},
  {1,0,0,0,0,0,1,0},
  {0,1,1,0,0,0,0,1},
  {0,0,0,1,1,0,0,1},
  {0,0,0,0,0,1,1,0}
};


void main()
{
  int i, j;
  //visited is initialized to zero
  for (i = 0; i < n; i++)
    visited[i] = 0;
  DFS (0);
}

void DFS(int i)
{
  int j;
  printf ("\n%d", i);
  visited[i] = 1;
  for (j = 0; j < n; j++)
    if (!visited[j] && G[i][j] == 1)
      DFS (j);
}
