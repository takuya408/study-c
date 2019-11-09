#include <stdio.h>
#include <stdlib.h>

double mypow(double a, int n)
{
  int i;
  double b = 1;

  for (i = 0; i < abs(n); i++) b *= a;	// a^|n|の値を計算する
  if (n < 0) b = 1 / b;	// nが負の値である場合は逆数を求める計算が実行される
  return b;
}

int main(void)
{
  int n;
  double a;

  printf("Input a > ");
  scanf("%lf", &a);
  printf("input n > ");
  scanf("%d", &n);

  if (a == 0) {
    printf("Error!\n");
    return 1;
  }

  printf("%f\n", mypow(a, n));
  return 0;
}
