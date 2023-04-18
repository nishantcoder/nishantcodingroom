#include <stdio.h>
int main()
{ 
    struct student
    {
        char name[25];
        int age;
        int marks;
    };
    
    int n;
    printf("Enter the Total number of student whose data to be entered\n...>");
    scanf("%d",&n);

    struct student stud[n],*ptr=stud;
    printf("enter the Name,age And marks of student\n");
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%s%d%d",&ptr->name,&ptr->age,&ptr->marks);
        ptr++;
    }

    for (i = 0; i < n; i++)
    {
        printf("%s\t%d\t%d\n",ptr->name,ptr->age,(*ptr).marks);
        ptr++;
    }
}