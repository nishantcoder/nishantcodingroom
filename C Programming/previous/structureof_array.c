#include <stdio.h>
int main()
{
    struct student
    {
        char name[25];
        int age;
        float marks;
    };
    int n;
    printf("Enter the Total number of student whose data to be entered\n...>");
    scanf("%d",&n);

    struct student stud[100];
    printf("enter the Name,age And marks of student\n");
    int i;
    for (i=0;i<n;i++)
    {
        printf("enter the data of student %d (seperated with comma)\n",i+1);
        scanf("%s%d%f",&stud[i].name,&stud[i].age,&stud[i].marks);
    }

    for (i = 0; i < n; i++)
    {
        printf("%s\t%d\t%.1f\n",stud[i].name,stud[i].age,stud[i].marks);
    }
    
    
}