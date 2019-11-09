#include <stdio.h>

int main(void)
{
  int i, j;
  double a[100], sum = 0;

  for (i = 0; i < 100; i++) {
    printf("Number > ");
    if (scanf("%lf", &a[i]) != 1 || a[i] < 0 || a[i] > 5) {
      break;
    }
    sum += a[i];
    printf("Average > %f\n", sum / (i + 1));
  }

  for (j = 0; j < i; j++) {
    printf("%f ", a[j]);
  }
  printf("\n");
  return 0;
}
