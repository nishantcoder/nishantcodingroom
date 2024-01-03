#include <stdio.h>

struct marks
{
    int math = 0;
    int english = 0;
    int hindi = 0;
    int science = 0;
    int sst = 0;
};
struct student
{
    char name[26];
    int standard = 0;
    char section;
    struct marks mark;
};
struct student stud;

int main()
{
    printf("Student Name \t");
    gets(stud.name);
    printf("Standard\t");
    scanf("%d", &stud.standard);
    printf("Section\t");
    scanf("%s", &stud.section);
    printf("Marks Math\t");
    scanf("%d", &stud.mark.math);
    printf("Marks english\t");
    scanf("%d", &stud.mark.english);
    printf("Marks Hindi\t");
    scanf("%d", &stud.mark.hindi);
    printf("Marks Science\t");
    scanf("%d", &stud.mark.science);
    printf("Marks SST\t");
    scanf("%d", &stud.mark.sst);   



    printf("---------------------------------------------------------------------\n");
    printf("                      Jawahar Navodaya Vidyalaya                     \n");
    printf("                          Annual Report Card                         \n");
    printf("Name : %s\n",stud.name);
    printf("Standard : %d\n",stud.standard);
    printf("Section : %c\n\n\n\n",stud.section);
    printf("Marks Secured Out of 100\n");
    printf("Mathematics : %d\n",stud.mark.math);
    printf("English : %d\n",stud.mark.english);
    printf("Hindi : %d\n",stud.mark.hindi);
    printf("Science : %d\n",stud.mark.science);
    printf("Social Science : %d\n\n\n",stud.mark.sst);
    int total=stud.mark.english+stud.mark.hindi+stud.mark.math+stud.mark.science+stud.mark.sst;
    printf("Total Marks Secured: %d\n",total);
    char grade;
    if (total<=500 && total>=450)
    {
        grade='A';
    }
    else if (total<=449 && total>=400)
    {
        grade='B';
    }
    else if (total<=399 && total>350)
    {
        grade='C';
    }
    else if (total<=349 && total>300)
    {
        grade='D';
    }
    else if (total<=299 && total>=200)
    {
        grade='E';
    }
    else if(total<200)
    {
        grade='F';
    }

    printf("Grade: %c\n",grade);
    printf("------------------------------------------------------------------");


    return 0;
}