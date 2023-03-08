#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the age of the employee between 20 to 60 :  \n");
    scanf("%d",&y);
    x=y/10;
    switch(x)
    {
        case 2:
        printf("Entered age of employee is in range of 20 to 29. \n");
        break;
        case 3:
        printf("Entered age of employee is in range of 30 to 39. \n");
        break;
        case 4:
        printf("Entered age of employee is in range of 40 to 49. \n");
        break;
        case 5:
        printf("Entered age of employee is in range of 50 to 59. \n");
        break;
        case 6:
        printf("Entered age of employee is 60. \n");
        break;
        default:
        printf("Age of employee is out of range. \n");
    }
return 0;
}