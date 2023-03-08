#include <stdio.h>
void comp(int a,int b,int c)
{
    if ((a>c) && (a>b))
    printf("%d is greater",a);
    else if ((b>a) && (b>c))
    printf("%d is greater",b);
    else
    printf("%d is greater",c);
}
void main()
{
    int x,y,z;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&x,&y,&z);
    comp(x,y,z);
}
