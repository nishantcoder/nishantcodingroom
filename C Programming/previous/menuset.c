#include <stdio.h>
#define pi 3.14
int main()
{
    int usr_input;
    char run='y';
    float radius,length,width,base,height,area;
    printf("Press 1. To Calcuate the area of the circle\n");
    printf("Press 2. To Calcuate the area of the Triangle\n");
    printf("Press 3. To Calcuate the area of the square\n");
    printf("Press 4. To Calcuate the area of the rectangle\n");
    while(run=='y')
    {
        printf("\nEnter Your Choice input : \t");
        scanf("%d",&usr_input);
        switch(usr_input)
        {
            case 1:
            printf("Enter the value for radius of the Circle :\t");
            scanf("%f",&radius);
            area=pi*radius*radius;
            printf("The area of the Circle is %.2f sq units.",area);
            break;
            case 2:
            printf("Enter the value for base of the Triangle :\t");
            scanf("%f",&base);
            printf("Enter the value for height of the Triangle :\t");
            scanf("%f",&height);
            area=(height*base)/2;
            printf("The area of the Triangle is %.2f sq units.",area);
            break;
            case 3:
            printf("Enter the value for side of the square :\t");
            scanf("%f",&length);
            area=(length*length);
            printf("The area of the sqaure is %.2f sq units.",area);
            break;
            case 4:
            printf("Enter the value for length of the rectangle :\t");
            scanf("%f",&length);
            printf("Enter the value for height of the rectangle :\t");
            scanf("%f",&width);
            area=(length*width);
            printf("The area of the rectangle is %.2f sq units.",area);
            break;
            default:
            printf("Invalid Choice entered. Please  Re-enter the correct choice\n");
        }
        printf("Do you want to run again.\n Press y for YES and n for NO :\t");
        scanf("%s",&run);
    }
}