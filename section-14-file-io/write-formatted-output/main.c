#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Person
{
    char name[20];
    int age;
    char job[20];
    bool isVeteran;
};

int main(void)
{
    FILE *fp;
    fp = fopen("file.csv", "w+");
    if (fp == NULL)
    {
        exit(-1);
    }

    struct Person people[] =
        {{"Sean",
          33,
          "developer",
          true},
         {"Erica",
          33,
          "rheumatologist",
          false}};
    struct Person *pPerson = people;
    struct Person *endAddress = pPerson + (sizeof(people) / sizeof(people[0]));

    fprintf(fp, "%s, %s, %s, %s\n", "Name", "Age", "Job", "isVeteran");
    for (; pPerson < endAddress; pPerson++)
    {
        fprintf(fp, "%s, %d, %s, %d\n", pPerson->name, pPerson->age, pPerson->job, pPerson->isVeteran);
    }
}