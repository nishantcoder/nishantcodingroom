#include <stdio.h>
int main()
{
    int i=1;
    while (i<=70)
    {
    	i++;
        if (i%7!=0)
        continue;
        printf("%d\n",i);
    }
    return 0;
}