## Standard Header Files

stddef.h contains some standard definitions

- NULL
- offsetof(structure, member) = function that calculates the offset of a member from the start of a structure
- ptrdiff_t = type of integer produced by substracting two integers
- size_t = type of integer produced by sizeof
- wchar_t = type of integer required to hold a wide character

limits.h contains implementation defined limits for character and integer data types

stdbool.h allows use of bool and true / false in place of the basic \_Bool type

string.h

strcat to concat strings

strchr to search a string for a char. Returns the first occurance
strrchr to search a string for a char, returning the last occurance

strcmp to compare if two strings are >, <, or =

strcpy copies a string

strlen returns length of string excluding null char

strncat
srtncmp
strncpy
^ All three of these are like the functions without the n, but they provide a third arg setting a max number of characters, which makes the operation safer. These should always be preferred because they help prevent buffer overflows.

strstr searchs for a substring in a string

strtok breaks a string up into tokens

### ctype.h

isalnum
isalpha
isblank
iscntrl
isdigit
isgraph
islower
isspace
ispunct
isupper
isxdigit

tolower
toupper

### stdio.h

EOF
NULL
stdin
stdout
stderr
FILE

fclose
feof - checks if at EOF
fflush - flush data from internal buffers to a file
fgetc
fgetpos
fgets
fopen
fputc
fputs
fprintf - write formatted output to a file, allowing you to serialize state
fscanf - read formatted output from a file into memory, allowing yo uto deserialize state and load into memory
fseek - move to a position
fsetpos
ftell - offset from beginning
printf
remove - delete file
rename
scanf

### stdlib

#### data type conversion

atof
atoi
atol
atoll

#### dynamic memory

malloc
calloc
free
realloc

### math.h

you also need to link to the math library during compile

acosh
sin
asin
atan
cos
tan

ceil
floor

log

nan - check if a string can be parsed to a number or not

pow
sqrt

remainder
round

### stdlib.h

abs - return absolute value of a signed int

exit - terminates a program with an exit code
abort - exits program and generates dump
atexit

getenv - read environment variable

qsort - allows you to sort data in an array

rand - generate a random number (need to generate seed first)
srand - seed random number
system - issues a command to the shell

### assert.h

Helps with debugging a C program

The assertions using assert() will only run when in debug mode

### time.h

macros and functions for times

### errno.h

macros for reporting of errors

### locale.h

localization stuff

### signal.h

helps deal with conditions during program execution

### stdarg.h

facilities for writing variadic functions (called varargs in C... variable number of args)
