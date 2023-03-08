#include <stdio.h>
#include <stdlib.h>
struct student
{
    int age;
    char name[25];
    char branch[5];
    int roll;
};
void main()
{
    int n,i;
    printf("Enter total of no of records to be entred");
    scanf("%d",&n);
    struct student  s1[n], *ptr = s1;
    FILE *fp = NULL;
    fp = fopen("studdata.txt", "a");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter  the Name of the student \n...>");
        scanf("%s", &ptr->name);
        printf("Enter  the  Branch of  student \n...>");
        scanf("%s", &ptr->branch);
        printf("Enter  the roll number of  student\n...>");
        scanf("%d", &ptr->roll);
        printf("Enter  the  Age of  Student\n...>");
        scanf("%d", &ptr->age);
        fprintf(fp, "%s\t\t%s\t\t%d\t\t%d\n", ptr->name, ptr->branch, ptr->roll, (*ptr).age);
        ptr++;
    }
    fclose(fp);
    printf("Data Succesfully Saved To our database");
}
