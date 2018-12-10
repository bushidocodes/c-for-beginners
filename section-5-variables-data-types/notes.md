## Overview

A computer keeps track of system memory by giving each byte an address

Programs derive their power from the manipulation of data

Because it's not human-friendly to work in memory addresses, higher-level languages like C allow memory spaces to be declared as typed variables. This provides some basic checks about the type of data that can be stored at a particular address and abstracts away the concept of memory address management.

Some variables are constants, meaning that their value cannot change throughout the life of the program

Valid C variable names must begin with a letter or underscore and then can be followed by letters, numbers, or underscores.

How does casing and tabs/spaces typically work in idiomatic C code?

Types in C are ints, floats, doubles, etc. Different types have different byte sizes that they consume in memory.

All data types in C are primitive data types because C does not have objects.

All variables must be declared before they are used.

```c
int myInt; // declare
myInt = 3; // initializing

// or

int mySecondInt = 4; // Declaration and Initialization in one line;
```

## Basic Data Types

The difference between the different data types is the amount of memory they use and the range of values that they can hold. This can vary between different computer architectures.

### int

Positive or Negative Whole Numbers
Signed Integer
If an integer is proceeded by a 0, the value is considered to be expressed as hex

```c
int rgbColor = 0xFFEF0D;
```

### float

Floating Point numbers, usually represented with 32 bits

Can use scientific notation

```c
float bigNum = 1.7e4;
```

### double

Floating Point number like float, but with double the number of bits (usually 64 bit)

Floating Point numbers are treated as doubles by default, but they can be explicity coerced just like in Java

```c
float PI1 = 3.14f;
double PI2 = 3.14;
```

### \_Bool

This just stores 0 or 1, and it's treated like false / true

### short, long, and unsigned

These can either be used as a type or as an adjectives that modify ints, floats, and doubles.
When used as a type, the C compiler treats the variable as an int

unsigned enforces that a value cannot be a negative value.

Signed can also be used as an adjective, but values are signed by default

```c
short float windowsVersion= 3.1;
long int numberOfPoints = 131071100L;
short dollarsRemaining = 15;
unsigned int myNonnegative = 15;
```

## Enums and Chars

An enum is a data type that only has a few permissable values

The video didn't show this, but I want to treat enums like classes and always capitalize the enum

```c
enum RPSState {rock, paper, scissors};
enum RPSState myPick = rock;
enum RPSState ericaPick = paper;
```

Under the hood, enums are ints. The list of possible values are mapped to integer indices

These indices auto-increment from 0, but they can be manually set

```c
enum direction {up, down, left = 10, right}; // up = 0, down = 1, left = 10, right = 11
```

### char

Char represents a single character, which can be a letter, number, semicolon, or special control character.
Think ASCII codes. Technically a char has be assigned an int representing the ASCII code of a character.

A char value is expressed by a single quote. This differentiates from a string, which uses double quotes

```c
char myGrade = 'A';
```

## Format Specifiers

Format specifiers are used when displaying variables as output using something like printf

Think of this as similar to tagged template strings in ES2015.

```c
int sum = 89;
printf("The sum is %d\n", sum);
```

## Command Line Arguments

A user can pass data into a program as an argument

Every C program has a main function

It receives two arguments.
The first is argc, the argument count of type int
The second is argv, an array of character pointers (strings) of each argument

```c
int main(int argc, char *argv[])
{
  // Do stuff with args here
}
```
