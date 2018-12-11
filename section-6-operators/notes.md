Operators are a function that use a symbolic name

Infix style is an operator being between the two things being acted on.

E.g. the operator + is between the two things being added in 5 + 5

Types of Operators:

- Logical = returns a boolean result
- Arithmetic = returns a numerical result
- Assignment
- Relational
- Bitwise

An operand is a bit of data being acted upon by an operator. This can be constants or variables

An expression is a combination of operators and operands which evaluates to a value

A statement is contructed from expressions.

A block is one or more statements wrapped in curly braces

A program is constructed from statements

Arithmatic Operator

Pretty much all the operators are identical to Java

Bitwise Operators directly operate on bits in integer values
This is used to represent data in super tiny spaces
Individual bits can be treated as boolean expressions

### Casting

data is both explicitly and implicitly cast in C
Developers need to be aware of the implicit casting rules
It's a good idea to explicitly cast

Assigning a float an int truncates off the decimal portion
Assigning an int to a float pads 0s in the decimals place

dividing two integers evaluates to an integer with the decimal discarded

If one operand is a float and the other is an int, than the int is cast to a float, and the expression results in a float

### sizeof

sizeof operator totals the number of bytes occupied in memory by a given type

To get the number of bytes occupied by an int on the compilation target:

```c
sizeof(int)
```

### \* operator

represents a pointer to a variable

### ? for ternary operator

Just like Java or JavaScript

### Operator Precendence

(), [], ->, ., ++, --
Negative Operator
Casting Operator
Exponent, SqRoot
Multiplication, Division, %
Addition, Subtraction
<<, >>

> , >=, <=, <
> ==, !=

Or paranthesis can express precendence. This is preferable for complex nested expressions
