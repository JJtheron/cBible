#include <stdio.h>
int main() {
  int c;
  c = getchar();
  while ((c = getchar()) != EOF) {
    printf("getchar() != EOF of %d\n", (c != EOF));
    putchar(c);
  }
  printf("getchar() != EOF of %d\n", (c != EOF));
}
