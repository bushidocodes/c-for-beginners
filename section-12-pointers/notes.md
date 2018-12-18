## Pointers

Similar to the concept of indirection

A refers to B
B refers to C

A resolves to C

In programming languages, indirection is the ability to reference a something using a name, reference, or something else.

A variable is a human-readable name that is associated with a memory address. This is a form of indirection.

In C, when a variable is declared, a chunk of memory is allocated for the size for the desired data type, and the variable is associated with the memory address of this chuck of data.

Variable refers to Memory Address
Memory Address refers to chunk of data

A pointer is a variable that stores a memory address
stored as a Hex

The pointer needs to know the type of data that it will point to so it understands how much memory is occupied and how the contents of the memory is structured

That means that pointers are typed and they can only point to addresses storing data in that particular type

```c
int number = 99;
int *pNumber = &number; // can only point to a memory address containing an int
```

The & operator returns the memory address of a primitive.
This allows us to then store the address in a pointer of the same type.

You can perform arithmatic with pointers (I guess to write repeating data structures to memory?)

Pointers in C make it easier to work with arrays and strings

Pointers allow you to reduce redundant data in memory.

Pointers allow functions to mutate external state. They can be passed memory addresses (pass by reference), which they can they mutate, rather than being passed the value of the data stored in that address (pass by value).

Because functions can't be defined inside of other functions in C, you can't create closures. Passing pointers to the data seems functionally similar to how closures are used.

In C, a function can only return one value, so you need to return a pointer if you want to return multiple pieces of data.

So far in the course, we've only allocated memory explicitly via static compile-time declarations.

Pointers allow us to create dynamic memory

Pointers allow us to develop more complex data structures.

Pointers provide direct memory access.

### Declaring pointers

Not like normal variables. You use the type of the data type the pointer is going to point to because some pointer operations need to know the amount of memory that the data structure uses.

The asterisk signifies that the value is a pointer

Commonly in C, you put a space between the \* operator and the variable name during declaration and you do not use it when dereferencing.

Here are examples of declaring pointers. We initialized them with the null pointer because it's dangerous to intialize a pointer without declaring it. Pointers should always be initialized on the same line that they are declared. NULL is written in all caps in C. It is defined in stddef.h

An undeclared pointer allows for malicious overwriting and buffer overflows.

```c
int * pNumber =  NULL; // Declare a Pointer able to store the memory address of ints
char * pc =  NULL; // Pointers able to store the memory address of a char
float * pf, * pf // Declaring two pointers able to store the memory address of floats. DANGEROUS BECAUSE NOT INITIALIZED
```

The value of a pointer is an address, and it's typically stored as an unsigned integer. This does not mean that you can use it like an integer!

A pointer is a new type, not an integer type.

Pointers occupy 8 bytes and the addresses have 16 hexadecimal digits.

%p is the format specifier for pointers.

It's a best pratice to prefix pointers with p to make it more obvious what they are

### Address Of Operator

& is the address of operator

```c
int number = 99; // Static compile-time allocation of memory for number
int *pnumber = &number; // Uses & to resolves to the address the compiler allocated for number and then store the address in a pointer
```

### Dereference Operator

\* is the "indirection operator" and it can either be used to declare a pointer or used to indicated that you want to "dereference" the pointer, which means that you want to resolve the pointer to the value of the memory address that it points to.

### Operations you can do on pointers

1. Assignment
   1. You can assign an address to a pointer by using the & operator on a primitive.
   1. You can assign an array name
   1. You can assign another pointer
1. Dereferencing
   1. You can resolve the value of the address of the memory address stored by the pointer uisng \*
1. Find Address of the Pointer
   1. You can fetch the memory address where the pointer itself resides using the & operator on the pointer
1. Pointer Arithmetic
   1. You can add an integer to a pointer. The integer is multiplied by the number of bytes of the data type of the pointer. This allows us to move a pointer across consecutive data of the same type. Similarly, you can use ++ to increment a pointer, which moves to the next element in memory.
   1. You can subtract an integer from a pointer or decrement using --. This is live moving backwards to the previous element in memory.
   1. You can substract one pointer from another to figure out how many elements they are apart.
   1. You can use relational operators to determine which pointer is as a higher/lower address
   1. Both of these operators are useful for moving between elements in an array. It can be trickly to keep track of the bounds of the array though!

When we receive input using scanf, we have to provide a pointer to an address. This is why we need to use &. We can also alternatively pass a pointer directly if we already have one declared.

If you declare a pointer without initializing it, the pointer has a random value (whatever was last written to memory?). That means that if you dereference that pointer in an assignment operator like the following

```c
int * pt;
*pt = 5;
```

You may write the value to a random place in memory, which might be unallocated and therefore harmless or it might be allocated and overwrite existing variables and cause the program to crash.

This is why it's so critical to always initialize a pointer immediately when you declare it, either through an existing variable, NULL, or an address you allocate dynamically using malloc().

You can test if a pointer is equal to NULL by doing the following. You should always do this before you dereference a pointer:

```c
if (!pvalue)
```

### Const modifier and pointers

The const keyword tells the compiler that the contents of the variable are not permitted to be changed in the future.

There are two different uses of const in a pointer

In this example, the const keyword is part of the type, so this pointer won't allow us to dereference pNumber and use it to assign a value to the memory address it points to. This is true even if the memory address itself wasn't declared as a const. This suggests to me that it's the interface to the memory address (variable name or pointer) that has to be locked down with a const.

Example 1: The const as part of the pointer's data type

```c
const int *pNumber = &number;
pNumber = &numberTwo; // Permissable to reassign to a different address
// *pNumber = 100; // Not allowed to change the content of the address pointed to
```

Example 2: The pointer itself is a const

```c
int *const pNumberTwo = &number;
*pNumberTwo = 88; // Allowed to change the content of the address pointed to
//pNumberTwo = &numberTwo; // Not allowed to reassign to a different address
```

### void pointers

void is a keyword we've used as a return type when a function doesn't return anything

A pointer of type void\* can contain the address of any type. If you don't know what you're going to store

This is basically an "any" escape hatch for the C type system.

It is usually used as a parameter type to allow a function to accept one of several alternate data types in a particular parameter. This is important because C does not permit the "overloading" of functions (same function name, but different signature via different parameter or return types)

It's up to the developer of the function to figure out the type and cast the input properly when dereferencing the pointer

### pointers and arrays

Arrays are collections of objects of the same time that we can refer to using a single variable name.

Arrays and pointers can actually be used interchangeably.

One of the most common uses of pointers is with character arrays

Pointers to arrays generally result in code that uses less memory and executes faster

When you declare a pointer that you want to use with an array, you declare it as a pointer of the type equal to an element contained in the array.

When you set a pointer equal to an array, the pointer is set equal to the address of the first element in the array.

It seems super weird to me to suggest using pointer math in place of the index of an array given that the index is a part of the data structure... I get that there might be a different culture around micro-optimization in C, but this one feels odd.

### Pointer Arithmetic

### Character Arrays

Character pointer = a pointer pointing at a character array

### Pass by Value / Pass by Reference

C does pass by value. It copies the value into a new variable with the name of the parameter. No side effects.

Passing pointers is used to achieve "pass by reference" in order to mutate external state

You should use a const pointer param when possible to protect against accidental mutation of external state

Returning a pointer from a function allows us to return multiple values

### Dynamic Memory Allocation

When you statically define a variable, the compiler automatically allocates memory for you

If we are going to read in a file while the program runs, we will need memory for storing the contents of the file. We can either preallocate a set amount of memory that we may or may not use or we can use dynamic memory allocation.

Dynamic memory allocation is being able to allocate memory while a program is running.

There are c functions for doing this

Dynamic memory allocation depends on the concept of a pointer

Dynamic memory allocation reserves space in the heap, and it's up to the programmer to free the space when it's no longer required

The stack is where function arguments and local variables are stored

Heap is more long-lived and you control via DMA
Stack is short lived and controlled by the compiler

### malloc, calloc, and realloc

#### memory allocation - malloc()

You pass in the number of bytes of memory that you want, and it returns a void pointer to a memory address of the first byte. It's a best practice to immediately cast the void pointer to the specific data type you want to store.

If you request too many bytes, malloc might fail. It it does, it will return a pointer with the value NULL

e.g. Allocating 100 bytes to store 25 ints. Because ints are typically 4 bytes, this gives us enough memory to store 25 ints.

```c
int *pNumber = (int*)malloc(100);
```

The problem here is that the C compiler might have different sizes for different data types on different processor architectures. It's a better approach to use something like `25 * sizeof(int)` to protect against a architecture when an int might be larger and cause a buffer overrun.

```c
int *pNumber = (int*)malloc(25 * sizeof(int));
// Test for NULL pointer
if (!pNumber) {
    // perform error correction, which typically should be an exit or abort with an error message
}
```

#### Releasing Memory

Always explicitly release memory on the heap when you're done with it. Never rely on the operating system to automatically release memory when your program ends!

A memory leak is when you lose track of a pointer with the address of memory that you've allocated. This makes it impossible to release memory. The memory leak causes the program's memory consumption to grow over time. This can cause a program to console all available memory on the host environment if it runs long enough.

A common cause of a memory leak is defining a pointer in the local scope of a function and then losing the pointer when the function completes. It's typically best to perform memory cleanup in the same scope where the memory was allocated.

To release memory, just pass a memory address of a pointer to free and then set the pointer equal to NULL.
Free has a void\* type for its param, so it will accept a pointer of any type

```c
free(pNumber);
pNumber = NULL;
```

It seems that for free to work as expected, the memory address needs to be the exact address that malloc returned. This means that any pointer arithmetic used in the function needs to be undone before calling free.

#### calloc

Allocates memory as a number of elements of a given size
Initialized the memory (zeros it out), which is safer

This seems to be better than malloc.

```c
int *pNumber = (int*)calloc(25, sizeof(int));
if (!pNumber) {
    // Do error handling
}
```

#### realloc

Allows the developer to reuse or extend memory that was previously allocated with malloc or calloc

first argument is the base address of memory previously allocated by malloc or calloc
second argument is the new size in bytes that you want allocated

If making the memory allocation larger, the existing data will actually be copied

But the existing data might be fragmented???

Returns a void\* pointer if successful or NULL if unsuccessful

In general, there is a bit of overhead allocating memory on the heap, so it's more efficient to allocate fewer larger blocks than many tiny blocks.
