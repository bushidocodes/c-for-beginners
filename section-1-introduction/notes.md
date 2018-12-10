C is a general-purpose imperative language that supports structured programming. It is good for small and fast programs

- Organized around functions
- Modular Design

Using VS Code for the course

Things we'll touch on:

- Syntax
- Makefiles
- Variables
- Data Types
- Basic Operators
- Conditional Statements
- Looping
- Arrays
- Functions
- Debugging
- Structs - Data Structures sort of like Objects
- Characters Strings
- Pointers - Memory management. Dereferencing and cleanup
- Preprocessor before the compiler
- Console and File I/O
- Standard Library

The goal is to be able to write beginner C programs at the end of the course

## Fundamentals of a Program

A program tells a computer what to do using the computer's instruction set
The programmer develops an algorithm that solves a problem and then implements that algorithm usings the statements of a particular programming language
The programming language is either compiled or interpreted, translating the more human-friendly statements of the programming language into the computer's instruction set

The operating system is just a big program that controls the operation of the computer system. It manages hardware resources, the execution of programs, and I/O.

fetch / execute cycle - The CPU fetches an instruction from memory (using registers) and then executes it. This is a loop that continues indefinitely.

Fetched from RAM / Registered
Decoded and Executed on Control Units or Arithmetic Logic Units (ALUs).

Assembly language is directly writing against the instructions of a CPU

Higher-level programming languages are higher-level abstractions that allow more expressive forms of algorithms wihtout having to worry about the specifics of the hardware.

C is a high-level programming language

C still needs to be expressed as detailed machine instructions. The compiler is responsible for converting the source C code into the machine instructions (binary)

C++ is a OO superset of C

Invented in 1972 by Dennis Ritchie of Bell Laboratories while working on the UNIX operating system

Evolved from a language B, and added types

Variations of C

- C89/C90
- C99
- C11

This class will focus on C99

### Language Features

Pointers... flexible and freedom, but added responsibility

editing
compiling
linking
executing

Compilation is two stage process: Preprocessing and then generating object code
