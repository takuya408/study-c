#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
  int c;

  printf("Input > ");
  while (1) {
    if ((c = getchar()) == EOF) {
      exit(EXIT_FAILURE);
    }

    if (c == '\n') {
      c = '\0';
    } else if (!isprint(c)) {
      exit(EXIT_FAILURE);
    }

    if (putchar(c) == EOF) {
      exit(EXIT_FAILURE);
    }
  }
  return 0;
}
