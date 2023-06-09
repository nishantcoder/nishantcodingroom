#include <stdio.h>
int main()
{
    int i;
    for(i=0;i<24;i++)
    {
        if (i==0)
        printf("%d : 00 Midnight\n",i);
        else if (i<12 && i>0)
        printf("%d : 00 AM\n",i);
        else if (i==12)
        printf("%d : 00'o noon\n",i);
        else if(i>12)
        printf("%d : 00 PM \n",i);
    }
}
