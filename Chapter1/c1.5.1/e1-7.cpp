#include <stdio.h>
int main() {
  int c;
  c = getchar();
  while ((c = getchar()) != EOF) {
    putchar(c);
  }
  printf("value of EOF is %d\n", EOF);
}
