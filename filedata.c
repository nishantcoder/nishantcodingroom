#include <stdio.h>
#include <stdlib.h>
struct student
{
    int age;
    char name[25];
    char branch[5];
    int roll;
} s1, *ptr = &s1;

void main()
{
    int n;
    FILE *fp = NULL;
    fp = fopen("studdata.txt", "a");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }

    printf("Enter  the Name of the student \n...>");
    gets(ptr->name);
    printf("Enter  the  Branch of  student \n...>");
    gets(ptr->branch);
    printf("Enter  the roll number of  student\n...>");
    scanf("%d", &ptr->roll);
    printf("Enter  the  Age of  Student\n...>");
    scanf("%d", &ptr->age);
    fprintf(fp, "%s\t\t%s\t%d\t%d\n", ptr->name, ptr->branch, ptr->roll, (*ptr).age);
    fclose(fp);
    printf("Data Succesfully Saved To our database");
}
