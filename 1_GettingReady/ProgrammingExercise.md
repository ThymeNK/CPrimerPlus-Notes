# Programming Exercise
You have just been employed by MacroMuscle, Inc. (Software for Hard Bodies). The company is entering the European market and wants a program that converts inches to centimeters (1 inch = 2.54 cm). The company wants the program set up so that it prompts the user to enter an inch value.
```c
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
```