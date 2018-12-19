#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 50

struct namect
{
    char *fname;
    char *lname;
};

void getinfo(struct namect *pst)
{
    // Define a staticly sized buffer to store input from the user
    char temp[SLEN];

    // Prompt for the user's first name
    printf("Please enter your first name.\n");
    scanf(" ");
    fgets(temp, SLEN, stdin);
    //dynamically allocate memory to hold the name using the actual length of the string held in temp
    pst->fname = (char *)malloc(strlen(temp) + 1);
    // Copy the value
    strcpy(pst->fname, temp);

    // Now do the same for the user's last name
    printf("Please enter your last name.\n");
    scanf(" ");
    fgets(temp, SLEN, stdin); // My name had a \n in it???
    pst->lname = (char *)malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);
}

int main(void)
{
    struct namect myname;
    getinfo(&myname);
    printf("First Name: %sLast Name: %s", myname.fname, myname.lname);
}