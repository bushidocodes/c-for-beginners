#include <stdio.h>
#include <stddef.h>

/**
 * Purpose: Experiment with applying the const keyboard to a pointer
 **/

int main(void)
{
    int number = 0;
    int numberTwo = 99;
    // In this example, the const keyword is part of the type, so this pointer won't allow us to dereference pNumber and use it to assign a value to the memory address it points to. This is true even if the memory address itself wasn't declared as a const. This suggests to me that it's the interface to the memory address (variable name or pointer) that has to be locked down with a const.
    const int *pNumber = &number;
    // *pNumber = 100; // Not allowed to change the content of the address pointed to
    pNumber = &numberTwo; // Permissable to reassign to a different address
    // *pNumber = 100; // Not allowed to change the content of the address pointed to
    printf("%d\n", *pNumber);
    number = 55; // In this case, because number wasn't defined as a const, we can sidestep the const limitation of the pointer and change the memory address through the variable name
    printf("%d\n", *pNumber);

    // In this example, the const keyword allies to the pointer pNumberTwo itself. This means that the pointer has been set to the address of number and cannot be reassigned. The pointer can be dereferenced and used to change the content at the memory address. This means that this example of const and the previous example are entirely different. We can use none, either, or both
    int *const pNumberTwo = &number;
    *pNumberTwo = 88; // Allowed to change the content of the address pointed to
    //pNumberTwo = &numberTwo; // Not allowed to reassign to a different address
    printf("%d\n", *pNumber);
    printf("%d\n", *pNumber);
}