#include<stdio.h>
int hcf(int a,int b)
{
  if(b!=0)
  return hcf(b,a%b);
  else 
  return a;
}
int main()
{
    int a,b;
    printf("enter two positive no.s\n");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("hcf of %d and %d is %d",a,b,hcf(a,b));
        else
                printf("hcf of %d and %d is %d",a,b,hcf(b,a));

}
