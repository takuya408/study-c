#include <stdio.h>
#define LINE_MAX 33

int main(void)
{
  int i;
  char str1[LINE_MAX], str2[LINE_MAX], str3[LINE_MAX];

  printf("Input str1 > ");
  scanf("%s", str1);
  printf("Input str2 > ");
  scanf("%s", str2);
  printf("Input str3 > ");
  scanf("%s", str3);

  for (i = 0; str1[i] != '\0' && str2[i] != '\0' && str3[i] != '\0'; i++) {
    printf("%c%c%c", str1[i], str2[i], str3[i]);
  }
  puts("");
  return 0;
}
