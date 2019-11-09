#include <stdio.h>
#include <math.h>

int main(void)
{
  int step;
  double a, b, x, y;

  printf("Input a: ");
  scanf("%lf", &a);
  printf("Input b: ");
  scanf("%lf", &b);

  for (step = 0; a - b >= 0.00001; step++) {
    x = (a + b) / 2;
    y = sqrt(a * b);
    a = x;
    b = y;
  }
  printf("Loop End.\n");
  printf("step=%d a=%f b=%f\n", step, a, b);
  return 0;
}
