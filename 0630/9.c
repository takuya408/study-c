#include <stdio.h>

int fib(int n)
{
  if (n < 2)
    return n;

  return fib(n - 1) + fib(n - 2);
}

int main(void)
{
  int n, result;

  printf("Input n > ");
  scanf("%d", &n);

  result = fib(n);

  if (result < 0) {
    puts("Error!");
    return 1;
  }

  printf("a[%d] = %d\n", n, result);
  return 0;
}
