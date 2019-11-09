#include <stdio.h>

int main(void)
{
  double x[3], y[3], product;

  printf("Input x > ");
  scanf("%lf %lf %lf", &x[0], &x[1], &x[2]);
  printf("Input y > ");
  scanf("%lf %lf %lf", &y[0], &y[1], &y[2]);

  product = x[0] * y[0] + x[1] * y[1] + x[2] * y[2];	// 2つのベクトルの内積の計算
  printf("Result > %f\n", product);
  return 0;
}
