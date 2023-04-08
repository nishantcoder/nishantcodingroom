#include<stdio.h>
#define pi 3.14
int main()
{
  float area,r,c;
  printf("enter the value of radius\n",r);
  scanf("%f",&r);
  area=pi*r*r;
  c=2*pi*r;

  printf("the area of circle is %.2f\n",area);
  printf("the perimeter of circle is %.2f\n",c);



}