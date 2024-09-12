#include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2 && num1>num3)
    {
        printf("Num1 is greater\n");
    }
    else
    {
        if (num2>num1 && num2>num3)
        {
            printf("Num2 is greater\n");
        }else
        {
            printf("Num3 is greater\n");
        }
        
        
    }
    
    
}