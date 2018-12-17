Character Strings

A character is enclosed in single quotes

```c
// good
char plusSign = '+';
// Will error. The ^ is actually {'^', '\0'} because of the double quotes, which cannot be assigned to a char
char wakka = "^";
```

A string constant or string literal is a sequence of characters between double quotes

A string is terminated with the null character \0. The length of an array needs to be one more than the number of characters to have space for the null character string terminator.

A character string is a char array

C has no data type for String, so you can't use any operators on a String. You need to use the functions from the standard library to manipulate strings.

Strings are arrays of characters in adjascent memory cells.

So myString below can store 19 characters becuase the last cell is taken up by the null terminator

```c
char myString[20];
```

You can also have the C compiler automatically size the character array. It will append the null terminator and size the array appropriately. This is the best practice for C, unless you're you want to preallocate space that you're going to use in the future.

```c
char word[] = "Hello!";
```

You can't do this because a String isn't a primitive.

```c
char s [100];
s = "hello";
```

You use `strncpy()` to assign a value to a character array.

You can template out a null terminated string directly using the array name and %s

```c
printf("\nThe message is: %s", message);
```

### Input string

When you input a string from the terminal, you don't need to dereference the string using the & as with the C primitives. However, `scanf` only reads up to a space. `fgets()` and a few other functions will allow input of spaces

```c
char input[10];
printf("Please enter your name: ");
scanf("%s", input);
```

You can't compare two strings using an operator because a string isn't a primitive like an int, float, double, etc.

so `string1 == string2` is impossible

`strcompare` from the standard library is used to compare different strings.

One way to define constants is to use the #define preprocessor directive

This is like a compile-time substitution. It's not really a variable

\#defines have no lexical scope. They can be used anywhere in the program.

It can be used for single characters and string constants

C90 added a constant modifier. The compiler will make this read-only.

```c
const int MONTHS = 12;
```

It's a bit better than the #define preprocessor directive because it has a type and lexical scope.

Here's an example with a null terminated string:

```c
const char message[] = "The end of the world is nigh.";
```

### String functions

The C standard library provides a bunch of functions to make up for string not being a primative in C.

### Pointers and Manual Memory Management

C provides a data type called a pointer
A pointer stores a memory address, usually in hex
One can use a pointer to read from or write to that address

So for example, we've been using this in scanf, which needs to be passed the address to write to.

By default, primitives are "pass by value," so to ensure that we pass the address of the variable and not the value of the variable, we have had to use the & operator.

We can save a pointer using the \* operator. This means "pointer pointing to an int".

```c
int myNum = 25;
int *pointerToMyNum = &myNum;
```

At this point, pointerToMyNum just stores the memory address of myNum. If you printf pointerToMyNum, you will see the address printed to screen. If you want to "dereference the pointer," which means to cause it to resolve to the value of the memory address that the pointer points to, you use the \* operator when calling it.

`scanf("%d, pointerToMyNum)` is the memoryAddress of myNum
`scanf("%d, *pointerToMyNum)` is 25

A string is not a primitive (base data type) in the C programming language. Rather, a character is a primitive and a string is an array of characters. This has the impact that C doesn't allow use of the base operators for manipulating strings.

As such, you can't use + to concatenate strings as in JavaScript
`const = "A good" + " day!"`

This includes the assignment operator!

Reading the length of a string.
strleng returns the length of the string excluding the null terminator
This is useful when looping over characters in a string

```c
char myString[] = "This is a string!";
printf("The length of the myString is %d\n", strlen(myString));
for (int i = 0; i < strlen(myString); i++) {
char c = myString[i];
printf("%c\n", c);
}
```

### String Assignment / copying

strcpy is used to assign strings anytime after initial instatiation

```c
char src[50] = "";
char dest[5] = "";
strcpy(src, "This is a value");
printf("Before copying src to dest...\n");
printf("src: %s\ndest: %s\n", src, dest);
```

It can also be used to "clone" a string
It seems like it's possible to overflow the size of the string and cause weird results though

To copy the first n characters from a string, you can use strncpy instead

This still can accidentally overwrite the null terminator

You can use sizeof to figure out the size of the array and then subrtract 1 to find the number of useable slots for characters leaving room for the null terminator

```c
printf("After copying src to dest...\n");
strncpy(dest, src, sizeof(dest) - 1);
strcpy(src, "This is a value2");
printf("src: %s\ndest: %s\n", src, dest);
```

### Concatenating Strings

strcat(first, seccond) appends the second string to the end of the first string
The first string is mutated and the second string is unchanged
It returns a pointer to the first character of the first string

There is a strncat that has a third argument just as with strncpy. This has the same safety advantages for avoiding a buffer overflow, but it's a bit harder to use, as the third argument is the max number of characters to append, so you have to do something like sizeof(dest) - strlen(dest) - 1 to find the number of extra slots

```c
char aString[160] = "Original String";
char input[80];

printf("Enter a string to be concatenated: ");
scanf("%s", input);
printf("The target string is an array of %i characters and %i have been taken so far", sizeof(aString), strlen(aString) + 1);

printf("\nThe string %s concatenated with %s is::::\n", aString, input);
printf("%s\n", strncat(aString, input, sizeof(aString) - strlen(aString) - 1));
printf("input: %s\n", input);
printf("aString: %s\n", aString);
```

### Comparing Strings

Using == with to strings is comparing by reference
To compare by value we need to use strcmp()
It compares the actual content of the null terminated string and ignores extra pre-allocated slots at the end of the array

Returns 0 if the strings are equal

Otherwise returns -1 if the second string is less than the first string
or 1 if the first string is less than the first string

I think this just uses character codes?

```c
char password[] = "password";
char pwAttempt[9];
printf("Enter password>");
scanf("%s", pwAttempt);
if (strcmp(pwAttempt, password) == 0) {
  printf("Access granted\n");
} else {
  printf("Access denied %s did not equal %s\n", pwAttempt, password);
}
```

With strncmp(), you can also limit a comparison to the first n characters of two strings

```c
char first[] = "Batman";
char second[] = "Batmobile";
if (strncmp(first, "Bat", 3) == 0){
printf("%s has prefix Bat\n", first);
}
```

### strchr() - Search a string for a character

first arg is the pointer to a string
second arg is the character code of the character you're looking for (the compiler will automatically cast a char to an integer)
returns the pointer of the first character match or NULL if no match is found

In C, NULL means that a pointer doesn't point to anything

```c
char str[] = "The quick brown fox";
char ch = 'q';
char *pMatch = NULL;
pMatch = strchr(str, ch);
```

### strstr() - Search a string for a substring

This is probably the MOST USEFUL OF THE STRING SEARCHING FUNCTIONS

first arg is the pointer to a string
second arg is the character code of the character you're looking for (the compiler will automatically cast a char to an integer)
returns the pointer of the first character of the matching substring or NULL if no match is found.

This will position the pointer at the start of the substring, but because the null terminator is of the end of the string, you need to use string functions to be able to know when to stop the string

```c
char strTwo[] = "The quick brown fox";
char substr[] = "quick";
char *pSubstrMatch = NULL;
pSubstrMatch = strstr(str, substr);
printf("%s\n", pSubstrMatch);
```

### strtok() - Tokenizing a string by a particular delimiter

first arg is the string to be tokenized
second arg is a string containing all possible delimiters

```c
char speech[] = "Four score and seven years ago";
char \*token;

// Grabbing the first token
token = strtok(speech, " ");
while (token != NULL) {
printf(" %s\n", token);
// You can advance to the next token by passing a null as the first argument
token = strtok(NULL, " ");
}
```

### Other assorted functions to analyze the content of a string

islower()
isupper()
isalpha()
isdigit()
return 1 if a match, 0 if not

toupper()
tolower()
Take a character and returns the upper or lowercase equivalent
This needs to be done in a loop for a string

E.g. converting a string to uppercase

```c
char test[] = "Hello World!";
printf("%s\n", test);
for (int i = 0; i < strlen(test); i++) {
  test[i] = toupper(test[i]);
}
printf("%s\n", test);
```

### Converting a string to other data types

ASCII to Float - atof() - Converts a string to a double
ASCII to Int - atoi() - Converts a string to an integer
ASCII to Long - atol() - Converts a string to a looking
ASCII to Long Long - atoll() - Converts a string to a long long
Int to ASCII - itoa()
etc etc etc

There are some newer alternatives
String to Double - strtod()
String to Float - strtof()
String to Long Double - strtold()

```c
char value_str[] = "98.4";
double value = atof(value_str);
```
