#include <stdio.h>

int main(int argc, char *argv[])
{
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    // argc always seems to be one more than I expect
    // This is because the first argument is program name, which is the relative path used to execute the binary from somewhere in the filesystem
    printf("Received %i arguments\n Arg 1: %s\n Arg 2: %s\n", numberOfArguments, argument1, argument2);
}