#include <stdio.h>
struct student
{
    int roll;
    char name[26];
};
struct teacher
{
    char tname[25];
    struct student data;
};
int main()
{

    FILE *p;
    p = fopen("demo.txt", "a+");
    struct teacher suho, *ptr;
    ptr = &suho;
    printf("enter the roll: \t");
    scanf("%d", &ptr->data.roll);
    printf("enter the name: \t");
    scanf("%s", &ptr->data.name);
    printf("enter the teacher name: \t");
    scanf("%s", &ptr->tname);
    fprintf(p, "%d\t%s\t%s\n", ptr->data.roll, ptr->data.name, ptr->tname);
    printf("successfully submitted");
    fclose(p);
}

/*printf("enter the roll: \t");
scanf("%d", &suho.data.roll);
printf("enter the name: \t");
scanf("%s", &suho.data.name);
printf("enter the teacher name: \t");
scanf("%s", &suho.tname);
fprintf(p, "%d\t%s\t%s\n", suho.data.roll, suho.data.name, suho.tname);*/
