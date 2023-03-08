#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter rthe number between 0 to 39 :  \n");
    scanf("%d",&y);
    x=y/10;
    switch(x)
    {
        case 0:
        printf("Entered number is in range of 0 to 9. \n");
        break;
        case 1:
        printf("Entered number is in range of 10 to 19. \n");
        break;
        case 2:
        printf("Entered number is in range of 20 to 29. \n");
        break;
        case 3:
        printf("Entered number is in range of 30 to 39. \n");
        break;
        default:
        printf("Number is out of range. \n")
    }
return 0;
}