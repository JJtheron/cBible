#include <stdio.h>

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Fahrenheit\t||\tCelsius\n");
  printf("----------------------------------------------\n");
  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%6f\t||\t%f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
/* %d decimal integer
 * %6d print as decimal, at 6 characters wide
 * %f print as floating point
 * %6f print as floating point, 6 characters wide
 * %.2f print as floating point, 2 characters after decimal point
 * %6.2f print as floating point 6 characters wide 2 decimal point
 * */
