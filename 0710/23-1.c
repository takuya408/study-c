#include <stdio.h>
#include <string.h>

#define STR_MAX 32

int strdel(char str[], char c)
{
  int i;
}

int main(void)
{
  int length;
  char c, str[STR_MAX];

  printf("str? ");
  scanf("%s", str);

  length = strlen(str);

  while (length > 0) {
    scanf("%c", c);
    length -= strdel(str, c);
  }
  return 0;
}
