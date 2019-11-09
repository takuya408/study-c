#include <stdio.h>

#define DATA_MAX 32

void sort_asc(int data[], int n)
{
  int i, j, tmp;

  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (data[i] > data[j]) {
        tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;
      }
    }
  }
}

int main(void)
{
  int i, data[DATA_MAX];

  for (i = 0; i < DATA_MAX; i++)
  {
    scanf("%d", &data[i]);
    if (data[i] < 0)
      break;
  }

  sort_asc(data, i);

  for (i = 0; i < DATA_MAX && data[i] >= 0; i++)
  {
    printf("%d\n", data[i]);
  }
  return 0;
}
