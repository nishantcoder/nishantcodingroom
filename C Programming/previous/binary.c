#include <stdio.h>
int main()
{
    printf("enter a Decimal Number to Convert it to binary :\t");
    int dec,rem,binr=0;
    int bin=0,brem;
    scanf("%d",&dec);
    int temp=dec;
    do
    {
        rem=dec%2;
        dec=dec/2;
        binr=binr*10+rem; 
    } 
    while (dec!=0);
    //printf("%d\n",binr);
    do
    {
        brem=binr%10;
        binr=binr/10;
        bin=bin*10+brem;        
    } 
    while (binr!=0);
    printf("The binary of %d  is  %d",temp,bin);
}