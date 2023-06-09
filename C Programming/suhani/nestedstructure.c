#include<stdio.h>
struct employee
{
    int id;
    char name[25];
};
struct manager
{
    int mid;
    struct employee emp;//nested structure

}s1,s2;
int main()
{
    printf("enter the Id of employee :  ");
    scanf("%d",&s1.emp.id);
    printf("enter the name of employee\n");
    scanf("%s",&s1.emp.name);
    printf("enter the mid of manager\n");
    scanf("%d",&s1.mid);
    printf("id\t name\t mid\n%d\t%s\t%d\n",s1.emp.id,s1.emp.name,s1.mid);
}