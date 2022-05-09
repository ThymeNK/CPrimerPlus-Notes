#include <stdio.h>

int main(void) {
  int ages, days;

  printf("Please input your age here: ");
  scanf("%d", &ages);

  days = 365 * ages;

  printf("You have lived %d years, that is %d days. \n", ages, days);

  return 0;
}