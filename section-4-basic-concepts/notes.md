The preprocessor handles special statements before compilation

These statements are called preprocessor directives, and they always include have # as the first non-space character on the line

The #include directive imports the header file of external standard and 3rd party libraries

```c
#include <stdio.h>
```

A file with the .h extension is a C header file, which is called a "header" because it is included at the head of a program source file (root directory of module?)

The header file defines information about the functions provided with the file. It seems like it contains the public API of the public API of the functions included by the library.

This includes

- #define directives
- structure declarations
- typedefs
- function prototypes (signatures),

stdio is the C standard library for Input and Output, such as `printf`

There are two syntaxes for including a header file in a program

Using angle brackets instructs the preprocessor to find the file is a standard system directory. Think of this as a global module, which is probably part of the C standard library:

```c
#include <stdio.h>
```

Using double quotes instructs the preprocessor to look for the file locally in the current directory

```c
#include "utils.h"
```

The #define directive creates constants and macros

- constants are unchanging values that your program can work with faster
- Macro???

There are some conditional directives to handle different preprocessor conditions (think progressive enhancement):

- #ifdef
- #endif
- #else
- #ifndef

scanf reads input from the UNIX standard input stream (stdin) and scans the input according to the format provided

e.g.
%s for strings
%d for integers
%c for characters
%f for floats

scanf can be used to read from files too, but we are just using it to read from the keyboard right now
