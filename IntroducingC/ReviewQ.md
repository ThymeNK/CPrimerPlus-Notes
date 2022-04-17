# Review Questions
1. What are the basic modules of a C program called?
   ```
   They are called functions.
   ```
2. What is a syntax error? Give an example of one in English and one in C.
   ```
   A syntax error is a violation of the rules governing how sentences or programs are put together. Here’s an example in English: “Me speak English good.” Here’s an example in C:
   ```
   ```
   printf"Where are the parentheses?";
   ```
3. What is a semantic error? Give an example of one in English and one in C.
   ```
   “A semantic error is one of meaning. Here’s an example in English: “This sentence is excellent Czech.” Here’s a C example:
   ```
   ```
   thrice_n = 3 + n;
4. Indiana Sloth has prepared the following program and brought it to you for approval. Please help him out.
   ```
   include studio.h
   int main{void} /* this prints the number of weeks in a year /*
   (int s
   s := 56;
   print(There are s weeks in a year.);
   return 0;
   ```
   ```
   #include <stdio.h>
   int main(void){ /* this prints the number of weeks in a year */
       int s;
       s = 52;
       printf("There are %d weeks in a year.\n", s);    return 0;
   }
   ```
5. Assuming that each of the following examples is part of a complete program, what will each one print?
   ```
   a. printf("Baa Baa Black Sheep.");
      printf("Have you any wool?\n");
   b. printf("Begone!\nO creature of lard!\n");
   c. printf("What?\nNo/nfish?\n");
   d. int num;
      num = 2;
      printf("%d + %d = %d", num, num, num + num);
   ```
   ```
   a. Baa Baa Black Sheep.Have you any wool?
   b. Begone!
      O creature of lard!
   c. What?
      No/nfish?
   d. 2 + 2 = 4
   ```
6. Which of the following are C keywords?  
`main, int, function, char, =`
   ```
   int and char (main is a function name, function is a technical term for describing C, and = is an operator).
   ```
7. How would you print the values of the variables words and lines so they appear in the following form:  
`There were 3020 words and 350 lines.`
   ```
   printf("There were %d words and %d lines. \n");
   ```
8. Consider the following program:
    ```
    #include <stdio.h>
    int main(void){
        int a, b;
        
        a = 5;
        b = 2;    /* line 7 */
        b = a;    /* line 8 */
        a = b;    /* line 9 */
        printf("%d %d\n", b, a);
        return 0;
    }
   ```
    What is the program state after line 7? Line 8? Line 9?
    ```
    After line 7, a is 5 and b is 2. After line 8, both a and b are 5. After line 9, both a and b are still 5. (Note that a can’t be 2 because by the time you say a = b;, b has already been changed to 5.)
    ```
9. Consider the following program:
   ```
    #include <stdio.h>
    int main(void){
        int x, y;
        x = 10;
        y = 5;
        y = x + y;
        printf("%d %d \n", x, y);
        return 0;
    }
    ```
    What is the program state after Line 7? Line 8? Line 9?

    ```
    After line 7, x is 10 and b is 5. After line 8, x is 10 and y is 15. After line 9, x is 150 and y is 15.
    ```