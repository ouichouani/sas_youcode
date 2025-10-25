

#include <stdio.h>
#include <string.h>

struct note
{
    int note;
};

struct homme
{
    char name[255];
    int age;
    struct note note[3];
};

struct homme list_homme[3];

void select_by_index(int index)
{
    printf("name : %s\n", list_homme[index].name);
    printf("age : %d\n", list_homme[index].age);
    printf("not 1 : %d\n", list_homme[index].note[1].note);
    printf("not 2 : %d\n", list_homme[index].note[0].note);
    printf("not 3 : %d\n", list_homme[index].note[2].note);
}

int main()
{
    strcpy(list_homme[0].name, "hello");
    list_homme[0].age = 20;
    list_homme[0].note[0].note = 20;
    list_homme[0].note[1].note = 2;
    list_homme[0].note[2].note = 10;
    
    select_by_index(0) ;
    
    return 0;
}