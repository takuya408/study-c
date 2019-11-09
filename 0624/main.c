#include <stdio.h>
#include <ctype.h>

void put_nc(char a, int n)
{
  int i, j;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (j < i) {
          printf(" ");
      } else {
          printf("%c", 'A' + (a - 'A' + i) % 26);
      }
    }
    puts("");
  }
}

int main(void)
{
  int n;
  char a;

  printf("Input a character > ");
  scanf("%c", &a);
  printf("Input n > ");
  scanf("%d", &n);

  if (!isupper(a) || n < 0 || n > 26) {
    puts("Error!");
    return 1;
  }

  put_nc(a, n);
  return 0;
}
