#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("enter the total no of values\n...>");
    int n,i,*ptr;
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    printf("Enter values ");
    /*for (i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }*/
    printf("The entered vallues are : ");
    for (i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    free(ptr);
}