#include <stdio.h>
union student
{
    int age;
    int marks;
}s1,s2;

int main()
{
    s1.age=12;
    
    printf("%d%d",s1.marks,s1.age);
}