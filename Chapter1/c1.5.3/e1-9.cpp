#include <stdio.h>

int main() {
  int c, n1, t1;
  n1 = 0;
  t1 = 0;
  while ((c = getchar()) != EOF) {
    if (c != '\t' && c != ' ' && c != '\n') {
      if (n1 > 0) {
        putchar('\n');
        n1 = 0;
      }
      if (t1 > 0) {
        putchar(' ');
        t1 = 0;
      }
      putchar(c);
    }
    if (c == '\n')
      n1++;
    if (c == '\t' || c == ' ')
      t1++;
  }
}
