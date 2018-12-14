## Arrays in C

The core concept of an array is being able to store a fixed number of data items of the same type under a single name

The data item in an array is called an element

Declaring a C array named numbers with a capacity to store ten longs

```c
long numbers[10];
```

The elements in an array is then accessed using an index or an expression that evaluates to an expression.

Loops are often used to access an array

The elements are actually adjascent to each other in memory?

The C compiler isn't able to check for out-of-bounds errors, so this would be encountered in runtime.

## Initialize an array

In C, it's a good idea to initialize all elements in an array when declared. If you don't initialize all of the elements, the remainder are set to 0.

Explicitly initializing all elements

```c
int counters[5] = {0,0,0,0,0};
```

This does the same

```c
int counters[5] = {};
```

## Multidimensional Arrays

Just like with other languages

```c
int matrix[4][5];
```

```c
int number[3][4] = {
    {10,20,30,40},
    {10,20,30,40},
    {10,20,30,40}
};
```

### Variable Length Arrays

Added in C99

This isn't dynamic. It just allows the size of the array to be initialized using a variable or an expression

```c
int n = 5;
float arrayOfFloats[n];
```
