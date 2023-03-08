#include <stdio.h>
void main()
{
    double ch;
    printf("Eneter a value b/w 1 to 2");
    scanf("%lf",&ch);
    switch (ch)
    {
        case 1:
        printf("1");
        break;
        case 2:
        printf("2");
        break;
    }
}