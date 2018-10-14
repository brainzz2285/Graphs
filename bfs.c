#include<stdio.h>

int q[20], visited[20], n=8, i, j, f = 0, r = -1,v=0;

 int a[8][8] = { {0,1,1,1,1,0,0,0},
  {1,0,0,0,0,1,0,0},
  {1,0,0,0,0,1,0,0},
  {1,0,0,0,0,0,1,0},
  {1,0,0,0,0,0,1,0},
  {0,1,1,0,0,0,0,1},
  {0,0,0,1,1,0,0,1},
  {0,0,0,0,0,1,1,0}
};

void bfs (int v)
{
  for (i = 0; i < n; i++)
    if (a[v][i] && !visited[i])
      q[++r] = i;
  if (f <= r)
    {
      visited[q[f]] = 1;
      bfs (q[f++]);
    }
}

void main ()
{
  int v;
  for (i = 0; i < n; i++)
    {
      q[i] = 0;
      visited[i] = 0;
    }
  bfs (v);
  printf ("\n The node which are reachable are:\n");
  for (i = 0; i < n; i++)
    if (visited[i])
      printf ("%d\t", i);
    else
      printf ("\n Bfs is not possible");
}
