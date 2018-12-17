## Debugging

Fix Errors presented by the compiler from the top down. The later errors might be caused by the first bug

The "maintenance phase" is the most expensive phase of the software life cycle.

I want to test using gdb via VSCode.

C does not have exception handling?

Test Suites and Unit Testing?

Unit Tests help avoid regression. TDD enforces high degree of coverage

Develop a design on paper first and use pseudo-code

## Call Stack

Analyze what led to a segfault, etc. A segfault generates a core file.

A stack trace is generated when a program crashes because of a fatal error.

It shows the function calls that led to the error (including file names and line numbers).

A program can dump the stack trace at any time.

You need to compile a binary with debug flags to be able to generate call stacks. This makes the binary bigger than normal. Typically this is stripped out for production binaries.

When running the debugger, you set breakpoints.

## Common C Mistakes

Forgetting to declare prototype declarations at the top of the file
Forgetting to link to the header file of a library that the program depends on
Mixing up character constants and characters strings via single or double quotes
Confusing . and -> operators when referencing structure members
forgetting to reference via & when using scanf with a primitive data type
Inserting a semicolon at the end of a preprocessor definition

## Compiler Error Messages

Some of the error messages are a bit more more obscure

compile with -Wall option to force all warnings to be fixed before a binary is generated
