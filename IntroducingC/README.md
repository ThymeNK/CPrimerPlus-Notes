# Introducing
## Example Explained
```c
#include <stdio.h>
```
*Include the information found in `stdio.h`  
This file provides support for keyboard IO and for displaying output*

---
```c
int main(void)
```
*C program consist of one or more functions and need to begin with the "`main`" function
"`()`" shows this is a function  
"`int`" shows the `main` function returns an integer*

---
```c
// A simple program

/* A simple 
            program */
```
*The **remarks** are lead by a "`/`"  
or enclose by "`/*`" & "`*/`"*

---
```c
{
```
*Beginning of the body of function*

---
```c
int num;
```
*A statement **declare** a variable "`num`", called **identifier** (can only consisted with letters, digits and underscore_ , begin with either a letter or an "_". There is also difference between lowercase letters and uppercase letters)  
and it will be an "`int`"(integer,called **keyword**) type*

---
```c
num = 1;
```
*Assigns the value "`1`" to the variable "`num`"*

---
```c
printf("helloworld! \n");
```
*Calling a function "`printf`"  
"`\n`" telling the computer to start a new line*

---
```c
return 0;
```
*The C function returns a number to the agency that used it.*

---
```c
}
```
*Ending with a closing brace*

And the program will finally output "`helloworld!`" on the screen.
## Debugging
Program errors often are called bugs, and finding and fixing the errors is called debugging.
### Syntax Errors
C syntax errors use valid C symbols in the wrong places.
### Semantic Errors
Semantic errors are errors in meaning.
## Keywords and Reserved Identifiers
Keywords are the vocabulary of C. Because they are special to C, you can’t use them as identifiers.
```
auto, break, case, char, const, continue, default,  
do, double, else, enum, extern, float, for, goto,  
if, inline, int, long, register, restrict, return,  
short, signed, sizeof, static, struct, switch,  typedef, union, unsigned, void, volatile, while