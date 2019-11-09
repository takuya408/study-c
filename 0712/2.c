#include <stdio.h>

#define K 5

int main(void)
{
  int i, j, height, data[K] = {0};

  printf("Input > ");
  do {
    scanf("%d", &height);

    for (i = 0; i < K; i++) {
      if (height > data[i]) {
        for (j = K; j > i; j--) {
          data[j] = data[j - 1];
        }
        data[i] = height;
        break;
      }
    }
  } while (height > 0);

  for (i = 0; i < K && data[i] > 0; i++) {
    printf("%d ", data[i]);
  }
  puts("");
}
