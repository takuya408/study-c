#include <stdio.h>

double f1(int);
double f2(int);

int main(void)
{
  int m;

  printf("Input > ");
  scanf("%d", &m);

  if (m < 0) {
    puts("Error!");
    return 1;
  }

  printf("a(%d) = %f\n", m, f1(m));
  printf("b(%d) = %f\n", m, f2(m));
  return 0;
}

double f1(int n)
{
  double a;

  if (n == 0) return 1.0;

  a = 1.5 * f1(n - 1) - f2(n - 1);
  return a;
}

double f2(int n)
{
  double b;

  if (n == 0) return 2.0;

  if (n % 2) {
    b = 0.5 * f2(n - 1) + f1(n - 1);
  } else {
    b = 2.0 * f2(n - 1);
  }
  return b;
}
