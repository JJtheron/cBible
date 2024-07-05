#include <stdio.h>

int main() {
  int c, n1, t1, s1;
  n1 = 0;
  t1 = 0;
  s1 = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++n1;
    if (c == '\t')
      t1++;
    if (c == ' ')
      s1++;
  }
  printf("New lines %d\n", n1);
  printf("number of tabs %d\n", t1);
  printf("number of spaces %d\n", s1);
}
