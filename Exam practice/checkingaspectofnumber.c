//Nishant Raj 22401 CSE 
#include <stdio.h>
int main()
{
    int arr[25], i, ecount = 0, ocount = 0, ncount = 0, pcount = 0;
    printf("Enter the 10 elements in an array :\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
            ecount++;
        else
            ocount++;
        if (arr[i] >= 0)
        {
            pcount++;
        }
        else
        {
            ncount++;
        }
    }
    printf("Total ODD : %d\nTotal Even : %d\nPositive : %d\nNEagtive : %d",ocount,ecount,pcount,ncount);

}