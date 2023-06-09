#include <stdio.h>
int main()
{
    int i,j;
    int num1[2][2],num[2][2],u,v,w,x;
    printf("Enter the elements of 2x2 matrix 1 : \n");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d",&num1[i][j]);

    printf("The 2x2 array matrix 1 is  \n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        printf("%3d",num1[i][j]);
        printf("\n");
    }
    printf("Enter the elements of 2x2 matrix 1 : \n");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d",&num[i][j]);

    printf("The 2x2 array matrix 2 is  \n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        printf("%3d",num[i][j]);
        printf("\n");
    }
    
    u=num1[0][0]*num[0][0]+num1[0][1]*num[1][0];
    v=num1[0][0]*num[0][1]+num1[0][1]*num[1][1];
    w=num1[1][0]*num[0][0]+num1[1][1]*num[1][0];
    x=num1[1][0]*num[0][1]+num1[1][1]*num[1][1];
    printf("\n\n %3d%3d\n %3d%3d",u,v,w,x);
    return 0;
}