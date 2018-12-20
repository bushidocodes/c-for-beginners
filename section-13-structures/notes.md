## C Structures (Structs)

Sort of like JavaScript Objects.

A way to group together bits of related data as Key Value Pairs

Data attributes are called "members"

`struct` keyword

The name of a structure is called a "tag name"

```c
// Defining a structure
struct date
{
    int month;
    int day;
    int year;
}

// Declare a variable of that structure
struct date birthDay;

// Set the value of the members in the structure using dot notation
today.month = 12;
today.day = 1;
today.year = 1985;
```

This struct has a tag name of "date" and members of month, day, and year

A member of a struct can be a pointer.

The dot is the "member selection operator"

You can declare named and anonymous structs
You can declare a struct and initialize instastance in one statement

## Structs and Arrays

You can have arrays of structs

```c
// Defining a structure
struct date
{
    int month;
    int day;
    int year;
}

```

## Structs and Pointers

Members can be pointers
We can have pointers to structs

Only newer versions of the C compiler allow for structures to be passed as arguments to functions

Even if you can pass a structure to a function, it's more efficient to pass a pointer. This is because you copy all the data of the struct into the function when you pass by value to the function

### Pointer to a struct

Pointers work with structs just like any other data type. However, the syntax for dereferencing is a bit complex because the \* operator has a lower precedence than the \. operator.

To get around this, we need to dereference the pointer in parantheses.

```c
// todaysDate assigned somewhere else
struct date *datePtr = &todaysDate;
(*datePtr).day // We need to dereference the pointer to get access to the member. Paranthesis are neccesary!
```

Because pointers are used so frequently with structures, C has a special "structure pointer operator" that simplifies the evaluation of members stored in a structure pointer

```c
// todaysDate assigned somewhere else
struct date *datePtr = &todaysDate;
datePtr->day // We need to dereference the pointer to get access to the member. Paranthesis are neccesary!
```

### Struct members that are pointers

A member of a struct might also be a pointer

```c
struct intPtrs {
    int *p1;
    int *p2;
};

struct intPtrs pointers;

// first and second defined elsewhere
pointers.p1 = &first;
pointers.p2 = &second;
```

### Should structs use character arrays or character pointers

When using character arrrays, the struct preallocates characters arrays of set lengths for the members
When assigning a value to those members, we are writing to the preallocated memory in the struct

```c
struct names {
    char first[20];
    char last[20];
};
struct names veep = {"Talia", "Summers"};
```

or

When using character pointers, we just preallocate space for pointers that store a memory address

So this example will segfault because first and last having been set to allocated memory. Most likley we would want some sort of setter that would dynamically allocate memory, set the pointer, and then set the value.

```c
struct pnames {
    char *first;
    char *last;
};
struct pnames treas = {"Brad", "Fallingjaw"};
```

### Structs and Functions

A structure can be passed as an argument to a function just like anything else

A structure can be returned from a function just like anything else. This makes it easier to return multiple values.

It is often better to return a pointer to a structure

Structs are actually pass by value in C

I guess arrays are also pass by value in C

The main different is that C functions can't return functions

