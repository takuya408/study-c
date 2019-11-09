#include <stdio.h>

void print_symbol(void)
{
  int i, n;

  scanf("%d", &n);
  if (n < 0)
    return;

  print_symbol();

  for (i = 0; i < n; i++)
    putchar('+');
  puts("");
}

int main(void)
{
  printf("Input > ");
  print_symbol();
}
