#include <stdio.h>
#define LINE_MAX 32

int main(void)
{
  int i, total = 1;
  char str1[LINE_MAX], str2[LINE_MAX], str3[LINE_MAX];

  printf("Input > ");
  scanf("%s %s %s", str1, str2, str3);

  for (i = 0; str1[i] != '\0' && total < LINE_MAX; i++, total++) {
    printf("%c", str1[i]);
  }

  for (i = 0; str2[i] != '\0' && total < LINE_MAX; i++, total++) {
    printf("%c", str2[i]);
  }

  for (i = 0; str3[i] != '\0' && total < LINE_MAX; i++, total++) {
    printf("%c", str3[i]);
  }
  puts("");
  return 0;
}
