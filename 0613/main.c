#include <stdio.h>

int main(void)
{
  int i, j;
  double A[3][3], x[3], product = 0;

  printf("Input A (A[0][0]-A[0][2]) > ");
  scanf("%lf %lf %lf", &A[0][0], &A[0][1], &A[0][2]);
  printf("Input A (A[1][0]-A[1][2]) > ");
  scanf("%lf %lf %lf", &A[1][0], &A[1][1], &A[1][2]);
  printf("Input A (A[2][0]-A[2][2]) > ");
  scanf("%lf %lf %lf", &A[2][0], &A[2][1], &A[2][2]);
  printf("Input x > ");
  scanf("%lf %lf %lf", &x[0], &x[1], &x[2]);

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      product += A[i][j] * x[j];
    }
  }
  printf("Result > %f\n", product);
  return 0;
}
