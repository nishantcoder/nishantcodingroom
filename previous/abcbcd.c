#include <stdio.h>
int main()
{
    int i,j;

    //int a[30]={1,2,3,4,5,6,7,8,9};
    for (i=0;i<6;i++)
    {
       for (j=1;j<=i;j++)
       {
        printf("%d ",j+i-1);
       }
        printf("\n");
    }
}
