#include <stdio.h>

int main(void)
{
  int i, j, k, n = 0;

  while (n < 1 || n > 51 || !(n % 2)) {
    printf("n? ");
    scanf("%d", &n);
  }

  k = n / 2 + 1;
  for (i = 0; i < n; i++) {
    if (i < k) {
      for (j = 0; j < n - i; j++) {
        if (j < i) {
          printf(" ");
        } else {
          printf("%c", 'a' + j - 2 * (j / k) * (j % k + 1));
        }
      }
    } else {
      for (j = 0; j <= i; j++) {
        if (j < n - i - 1) {
          printf(" ");
        } else {
          printf("%c", 'a' + j - 2 * (j / k) * (j % k + 1));
        }
      }
    }
    printf("\n");
  }
  return 0;
}
