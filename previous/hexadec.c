#include <stdio.h>
int main()
{
    printf("enter a Decimal Number to Convert it to binary :\t");
    int dec,rem;

    scanf("%d",&dec);
    int temp=dec,index=0,arr[50];
    do
    {
        rem=dec%16;
        dec=dec/16;
        if (rem>9)
        {
            if (rem==10)
            printf("A");
            if (rem==11)
            printf("B");
            if (rem==12)
            printf("C");
            if (rem==13)
            printf("D");
            if (rem==14)
            printf("E");
            if (rem==15)
            printf("F");
        }
        else
        printf("%i",rem);
    } 
    while (dec!=0);

}