#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Family
{
    char name[20];
    int age;
    char father[20];
    char mother[20];
};

bool areSiblings(const struct Family *const member1, const struct Family *const member2)
{
    return strcmp(member1->mother, member2->mother) == 0;
}

int main(void)
{

    struct Family sean = {"Sean", 33, "Brian", "Kim"};
    struct Family helen = {"Helen", 30, "Brian", "Kim"};
    printf("%s", areSiblings(&sean, &helen) ? "true\n" : "false\n");
    return 0;
}