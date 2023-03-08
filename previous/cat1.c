#include <stdio.h>
int main()
{
    printf("Enter the no of data to be entered  :");
    int n;
    scanf("%d",&n);
    struct student
    {
        int roll;
        char branch[10];
        char name[25];
    } stud[n];
    int i;
    
    for (i=0;i<n;i++)
    {
        printf("Enter the details of student Branch,roll and name %d\n",i+1);
        scanf("%s%d%s",&stud[i].branch,&stud[i].roll,&stud[i].name);
    }
    printf("S.no\tRoll\tBranch\tName\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t%d\t%s\t%s\n",i+1,stud[i].roll,stud[i].branch,stud[i].name);
    }
}