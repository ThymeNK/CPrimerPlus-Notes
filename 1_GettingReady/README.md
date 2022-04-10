# Getting ready
## Whence C?
Dennis Ritchie & Ken Thompson created C based on B language when designing the UNIX system in 1972.
## Why C?
- Reliable
- efficient
- portable
- powerful
## Whither C?
- Operating systems
- Applications
- Embedded systems
- .etc
## What Computers Do?
CPU fetches an instruction from memory and executes.  
And you need to represent each of these instruction with a numeric code.
## High-Level Computer Languages and Compilers
Compilers translate the high-level program into detailed set of machine language instruction.
## Language Standards
- The first ANSI/ISO Standard
  - Defined both the language and standard C library.
- The C99 Standard
  - In 1994, began revising the standard.
- The C11 Standard
  - In 2007, committed the C1X, became realizes as C11.
## Using C: Seven Steps
1. Define the program objectives
2. Design the program
3. Write the code
4. Compile
5. Run the program
6. Test and debug the program
7. Maintain and modify the program
## Programing Mechanics
When writing a program, what you write are stored in a text file called a *source code file*, required the name end in `.c` (e.g. `helloworld.c`). The name before the period is called the *basename*, and the name after called the *extension*.
### Object Code Files, Executable Files and Libraries
The basic strategy of C is to convert the source code file to an executable file. And the two steps to do this are compiling & linking.

Compiler converts the source code to an intermediate code. (e.g. `helloworld.obj`, end with "`.o`" in Unix.)  
And the linker brings together these three elements--object code, standard startup code and the library code--and put them together into an executable file. (e.g. `helloworld.exe`. In Unix, the name "`a.out`" is the executable file, we usually need to rename it if we want to keep the file.)
## The GUN Compiler and the LLVM Project*
- GNU--gcc
- LLVM--clang
```c
cc -v
```
*Shows the compiler & version are using.
Using `cc` alias for either `gcc` or `clang` commend.*
```c
gcc -std=c99 inform.c
gcc -std=c1x inform.c
```
*Invokes different standards.  
Clang compiler uses the same flags.*

[Review Questions](https://github.com/ThymeNK/CPrimerPlus-Notes/blob/main/1_GettingReady/ReviewQuestions.md) & [Programming Exercise](https://github.com/ThymeNK/CPrimerPlus-Notes/blob/main/1_GettingReady/ProgrammingExercise.md)
