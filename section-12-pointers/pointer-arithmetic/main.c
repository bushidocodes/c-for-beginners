#include <stdio.h>

int stringLength(const char *pString);

int main(void)
{
    char *name = "Sean McBride";
    char *empty = "";
    printf("\"%s\" has length %d\n", name, stringLength(name));
    printf("\"%s\" has length %d\n", empty, stringLength(empty));
    return 0;
}

int stringLength(const char *const startAddress)
{
    const char *endAddress = startAddress;
    while (*endAddress != '\0')
    {
        endAddress++;
    }
    return endAddress - startAddress;
};