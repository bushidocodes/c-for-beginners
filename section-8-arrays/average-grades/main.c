#include <stdio.h>
#include <string.h>

int main(void)
{
    int grades[10];
    int count;
    long sum = 0;
    float average = 0.0f;
    char prompt[20] = "\nEnter the "; /* First part of string which we'll append to below */

    printf("\nHow many grades do you want to average?:\n");

    scanf("%d", &count);
    char temp[5];
    sprintf(temp, "%d", count);
    strcat(prompt, temp);
    strcat(prompt, " grades:\n");
    printf(prompt);

    for (int i = 0; i < count; ++i)
    {
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }
    average = (float)sum / count;
    printf("\nAverage of the ten grades entered is: %.2f\n", average);

    return 0;
}