#include <stdio.h>

int main(void)
{
  int k, n, y[16];

  printf("Input > ");
  if (scanf("%d", &k) != 1 || k < 0 || k > 15) {
    printf("Out of range\n");
    return 1;
  }

  y[0] = 2; y[1] = 1;
  for (n = 2; n <= k; n++) {
    y[n] = y[n - 1] + y[n - 2];
  }

  for (n = 0; n <= k; n++) {
    printf("y[%d] = %d\n", n, y[n]);
  }
  return 0;
}
