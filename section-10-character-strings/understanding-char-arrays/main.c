#include <stdio.h>
#include <stdbool.h>

int sizeOfString(const char charArray[]);
void concatStrings(char result[], const char str1[], const char str2[]);
bool isEqual(const char str1[], const char str2[]);

int main(void)
{
    char myStr[] = "Test String";
    printf("\"%s\" has length of %d\n", myStr, sizeOfString(myStr));

    char result[100];
    char one[] = "Hello ";
    char two[] = "World!\n";
    concatStrings(result, one, two);
    printf("%s", result);

    char three[] = "Wakka";
    char four[] = "Wakka";
    char five[] = "WakkaWakka";
    printf("three equal four ? %d\n", isEqual(three, four));
    printf("three equal five ? %d\n", isEqual(three, five));

    return 0;
}
int sizeOfString(const char charArray[])
{
    int result = 0;
    while (charArray[result] != '\0')
        result++;
    return result;
}

void concatStrings(char result[], const char str1[], const char str2[])
{
    int idx = 0;
    for (int j = 0; str1[j] != '\0'; j++)
    {
        result[idx] = str1[j];
        idx++;
    }
    for (int j = 0; str2[j] != '\0'; j++)
    {
        result[idx] = str2[j];
        idx++;
    }
    result[idx] = '\0';
};

bool isEqual(const char str1[], const char str2[])
{
    int idx = 0;
    while (str1[idx] != '\0' || str2[idx] != '\0')
    {
        if (str1[idx] != str2[idx])
        {
            return false;
        }
        idx++;
    }
    return true;
}