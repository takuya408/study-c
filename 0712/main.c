#include <stdio.h>

#define DATA_MAX 16

int chdata(int data[], int n, int a, int b)
{
  int i, j;

  for (i = 0; i < n && data[i] >= 0; i++) {
    //if (data[i] < a || data[i] > b) {
    if (!(data[i] >= a && data[i] <= b)) {
      for (j = i; j < DATA_MAX && data[j] >= 0; j++) {
        data[j] = data[j + 1];
      }
      i--;
    }
  }
  return i;
}

int main(void)
{
  int i, n, a, b, data[DATA_MAX + 1];

  data[DATA_MAX] = -1;

  printf("Enter integers(neg.: END): ");
  for (i = 0; i < DATA_MAX; i++) {
    scanf("%d", &data[i]);
    if (data[i] < 0) break;
  }
  printf("Enter two integers, a and b(a<=b): ");
  scanf("%d %d", &a, &b);
  printf("%d <= data[] <= %d\n", a, b);

  n = chdata(data, i, a, b);

  for (i = 0; i < n && data[i] >= 0; i++) {
    printf("data[%d]: %d\n", i, data[i]);
  }
  return 0;
}
