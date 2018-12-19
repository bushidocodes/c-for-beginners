#include <stdio.h>
#include <time.h>
#include <string.h>

#define SLEN 50

struct Employee
{
    char name[SLEN];
    time_t hireDate;
    float salary;
};

struct Employee addEmployee()
{
    char temp[SLEN + 1]; /* We add a character because we are going to capture and filter out an extra \n char */
    struct Employee newEmployee;

    printf("Welcome new employee!\n");
    printf("What is your full name?: ");
    fgets(temp, SLEN, stdin); // My name had a \n in it???
    temp[strcspn(temp, "\n")] = 0;
    strcpy(newEmployee.name, temp);
    time(&newEmployee.hireDate);
    printf("What is your salary?: $");
    scanf("%f", &newEmployee.salary);
    return newEmployee;
}

int main(void)
{

    struct Employee bob = {
        name : "Robert Mondave",
        hireDate : 1545224875,
        salary : 85000.00
    };

    struct Employee user = addEmployee();

    printf("Employee #1\n");
    printf("Name: %s\nStart Date: %sSalary: $%.2f\n", bob.name, ctime(&bob.hireDate), bob.salary);

    printf("\nEmployee #2\n");
    printf("Name: %s\nStart Date: %sSalary: $%.2f\n", user.name, ctime(&user.hireDate), user.salary);

    return 0;
}