//pointer to pointer (double pointer)
#include <stdio.h>
int main()
{
    int variable=5;
    int *ptr=&variable;
    int **dptr=&ptr;
    printf("%d\n%d",*ptr,**dptr);
}