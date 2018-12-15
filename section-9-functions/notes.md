# Functions

Functions in C are the same as Subroutines or Procedures

What are the differences between these things?

Modularize Code to make it easier to test, debug, and maintain a codebase by treating imperative logic as a black box

DRY up the code

Function signatures in C?

Use meaningful function names that describe what the function does

The function header is everything before the body of the function

It contains the signature, which is composed of the following:

- return type
- name
- types and names of parameters

```c
int function add(int one, int two) {}
```

Overloading is not allowed in C, so you can't have the same name with different signatures

Camelcase convention is acceptable for C programs

A functional prototype is a function signature, but ends in a semicolon without a body

A header file adds the functional prototypes for the library that you're importing

A function needs to be declared before it is called. C often defines function prototypes at the top of the file above the main function.

A function can return enums, pointers, or void

Function Scope

Functions have block scope that are declared and cleaned up each time that the function is called. However, A function can also have a static variable that has a value that persists between invocations.

C uses block scoping, which is anything in a curly brace

global variables are declared outside of all functions

Globals promote coupling, which is an antipattern.

If a function has a bunch of a parameters, use a struct
