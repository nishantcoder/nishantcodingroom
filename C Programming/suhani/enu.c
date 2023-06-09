#include<stdio.h>
int main()
{
    enum week{wed,thu,fri};
    enum week today;
    today=thu;
    printf("%d",today+1);
}