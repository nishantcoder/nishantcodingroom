#include<stdio.h>
int main()
{
    enum week{sunday,mon,tue};
    enum week today;
    today=mon;
    printf("%d",today+1);
}