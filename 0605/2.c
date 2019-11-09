#include <stdio.h>

int main(void)
{
  int j, k;

  k = 11 / 2 + 1;
  printf("012345678910\n");
  for (j = 0; j < 11; j++) {
    //printf("%d", j % k + 1);
    printf("%d", 2 * (j / k) * ((j % k + 1)));
  }
  printf("\n");
  return 0;
}