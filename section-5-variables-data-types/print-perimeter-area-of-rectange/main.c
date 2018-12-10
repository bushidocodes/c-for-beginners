/**********************************************************
 * Author: Sean McBride                                   *
 * Purpose: Given the width and height of a rectangle     *
 *          calculates and prints the perimeter and area  *
 * *******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double width = atof(argv[1]);
    double height = atof(argv[2]);
    double perimeter = 2 * width + 2 * height;
    double area = width * height;
    printf("Perimeter: %.2f\nArea: %.2f\n", perimeter, area);
    return 0;
}