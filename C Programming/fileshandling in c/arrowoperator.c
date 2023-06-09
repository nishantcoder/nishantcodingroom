#include <stdio.h>
struct student
{
    int  age;
    char name[25];
    char branch[5];
    int  roll;
} s1,*ptr=&s1;
int  main()
{
    printf("Enter  the Name of the student \n...>");
    gets(ptr->name);

    printf("Enter  the  Branch of  student \n...>");
    gets(ptr->branch);
    printf("Enter  the roll number of  student\n...>");
    scanf("%d",&ptr->roll);
    printf("Enter  the  Age of  Student\n...>");
    scanf("%d",&ptr->age);
    printf("NAME\t\tBRANCH\tROLL\tAGE\n%s\t%s\t%d\t%d",ptr->name,ptr->branch,ptr->roll,(*ptr).age);
    
}
