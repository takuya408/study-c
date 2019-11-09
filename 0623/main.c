#include <stdio.h>

double mypow(double a, int n)
{
  int i;
  double b = 1;

  if (n < 0)
    for (i = n; i < 0; i++) {
      b = b * (1 / a);
    }
  else if (n > 0)
    for (i = 0; i < n; i++) {
      b = b * a;
    }
  return b;
}

int main(void)
{
  int n;
  double a;

  printf("Input a > "); scanf("%lf",&a);
  printf("input n > "); scanf("%d",&n);

  a = mypow(a,n);

  if (a == 0) {
    printf("Error!\n");
    return 1;
  }

  printf("%f\n",a);
  return 0;
}
