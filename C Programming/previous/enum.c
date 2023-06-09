#include <stdio.h>
int main()
{
    enum week
    {
        mon,tue,wed,thru,fri,sat,sun
    };
    enum week today;
    today=wed;
    printf("%d",today+1);
}