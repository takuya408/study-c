#include <stdio.h>

#define K 5

int index_min(int data[])
{
  int i, min = 0;

  for (i = 1; i < K; i++) {
    if (data[min] > data[i]) {
      min = i;
    }
  }
  return min;
}

int input_data(int data[])
{
  int i, j, k = 0, height;

  do {
    scanf("%d", &height);

    if (k >= K) {
      j = index_min(data);
      if (height > data[j]) {
        for (i = j; i < K - 1; i++) {
          data[i] = data[i + 1];
        }
        data[K - 1] = height;
      }
    } else {
      data[k] = height;
    }
    k++;
  } while (height > 0);
  return k;
}

void print_data(int data[], int elements)
{
  int i;

  if (elements >= K)
    i = K - 1;
  else
    i = elements - 2;

  while (i >= 0) {
    printf("%d ", data[i]);
    i--;
  }
  puts("");
}

int main(void)
{
  int num, data[K];

  printf("Input > ");
  num = input_data(data);

  print_data(data, num);
  return 0;
}
