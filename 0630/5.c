#include <stdio.h>

#define N 10

void init_mat(int A[][N], int m)
{
  int i, j;

  for (i = 0; i < m; i++) {
    for (j = 0; j < N; j++) {
      A[i][j] = i * j;
    }
  }
}

int main(void)
{
  int i, j, m = 10, A[m][N];

  init_mat(A, m);

  puts("A =");
  for (i = 0; i < m; i++) {
    printf("  ");
    for (j = 0; j < N; j++) {
      printf("%2d ", A[i][j]);
    }
    puts("");
  }
  return 0;
}
