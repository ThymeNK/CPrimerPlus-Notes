# Programming Exercise
1. Write a program that uses one printf() call to print your first name and last name on one line, uses a second printf() call to print your first and last names on two separate lines, and uses a pair of printf() calls to print your first and last names on one line. The output should look like this (but using your name):
   ```
   Gustav Mahler  ←First print
   statementGustav   ←Second print
   statementMahler   ←Still the second
   print statementGustav Mahler  ←Third and fourth print
   statements
   ```
   ```c
   #include <stdio.h>

   int main(void) {
      printf("Thyme Tao\n");  // Whole name
      printf("Thyme\n");      // First name
      printf("Tao\n");        // Last name
      return 0;
   }
   ```
   [*To get the "c" file please click here.*](Print_Name.c)
---
2. Write a program to print your name and address.
   ```c
   #include <stdio.h>

   int main(void) {
     printf("My name is Thyme, and my address is *** \n"); // Just print (^_^*)
     return 0;
   }
   ```
   [*To get the "c" file please click here.*](Name_Address.c)
---
3. Write a program that converts your age in years to days and displays both values. At this point, don’t worry about fractional years and leap years.
   ```c
   #include <stdio.h>

   int main(void) {
     int ages, days;

     printf("Please input your age here: ");
     scanf("%d", &ages);

     days = 365 * ages; // Ignore the fractional years and leap years

     printf("You have lived %d years, that is %d days. \n", ages, days);

     return 0;
   }
   ```
   [*To get the "c" file please click here.*](Age_Converter.c)
---
4. Write a program that produces the following output:
For he's a jolly good fellow!For he's a jolly good fellow!For he's a jolly good fellow!Which nobody can deny!
Have the program use two user-defined functions in addition to main(): one named jolly() that prints the “jolly good” message once, and one named deny() that prints the final line once.
---
5. Write a program that produces the following output:
Brazil, Russia, India, ChinaIndia, China,Brazil, Russia
Have the program use two user-defined functions in addition to main(): one named br() that prints “Brazil, Russia” once, and one named ic() that prints “India, China” once. Let main() take care of any additional printing tasks.
---
6. Write a program that creates an integer variable called toes. Have the program set toes to 10. Also have the program calculate what twice toes is and what toes squared is. The program should print all three values, identifying them.
---
7. Many studies suggest that smiling has benefits. Write a program that produces the following output: