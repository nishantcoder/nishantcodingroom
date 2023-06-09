#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Total number of student whose data to be entered\n...>");
    scanf("%d",&n);
    struct student
    {
        char name[25];
        int age;
        char branch[10];
    }stud[n],*ptr=stud;
 
    printf("enter the Name,branch and age  of student\n");
    int i;
    for (i=0;i<n;i++)
    {
        printf("enter the data of student %d \n",i+1);
        gets(ptr->name);
        //scanf("%d",&ptr->age);
        gets(ptr->branch);
        
        ptr++;
    }
    printf("Name\tBranch\tage\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\n",ptr->name,ptr->branch,(*ptr).age);
        ptr++;
    }
    
    
}