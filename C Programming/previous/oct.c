#include <stdio.h>
int main()
{
    int a,b,c,d;
    float s;
    printf("Enter the value of a and b : \n");
    scanf("%d%d",&a,&b);
    printf("Enter the value of c and d : \n");
    scanf("%d%d",&c,&d);
    s=(a/b)+(c/d);
    printf("The value of (a/b + c/d) without typecast is : %f \n",s);
    s=((float)a/b)+((float)c/d);
    printf("The value of (a/b + c/d) with typecast is : %f \n",s);
    return 0;
}