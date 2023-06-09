#include <stdio.h>
int swap(int t,int w)
{
    int u,v;
    u=w;
    v=t;
    printf("After Swapping a and b are %d and %d",u,v);

}
int main()
{
    int a,b;
    printf("enter the value for a and b");
    scanf("%d%d",&a,&b);
    swap(a,b);
}