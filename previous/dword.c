#include <stdio.h>
int main()
{
    int rev=0,num,digit,rem,remn;
    printf("Enter a number :\t");
    scanf("%d",&num);
    while (num!=0)
    {
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;
    }
   // printf("%d",rev);
     while(rev!=0)
    {
        remn=rev%10;
        rev=rev/10;
        switch (remn)
        {
        case 1:
            printf(" One ");
            break;
        case 2:
            printf(" Two ");
            break;
        case 3:
            printf(" Three ");
            break;
        case 4:
            printf(" Four ");
            break;
        case 5:
            printf(" Five ");
            break;
        case 6:
            printf(" Six ");
            break;
        case 7:
            printf(" Seven ");
            break;
        case 8:
            printf(" Eight ");
            break;
        case 9:
            printf(" Nine ");
            break;
        case 0:
            printf(" Zero ");
            break;
        }
    }

   }