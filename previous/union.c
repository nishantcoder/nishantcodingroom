#include <stdio.h>

int main()
{
    union student
    {
        int age;
        char name[25];
    };
    union student stud1,stud2;
    printf("%d",sizeof(stud1.age));
}