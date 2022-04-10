#include <stdio.h>       // Include the library
#define ConvertNum 2.54  // Define the constants
int main(void) {
  float inch, cm;  // Define the variable
  printf("Please input the inch value: \n");
  scanf("%f", &inch);

  cm = ConvertNum * inch;
  printf("the cm value is %.2f \n", cm);
  return 0;
}