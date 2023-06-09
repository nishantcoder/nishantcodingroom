#include <stdio.h>
int main()
{
    int arr[]={23,56,78,96,45,78};
    int *p=arr,*q=arr;
    printf("The address stored in pointer is %u\n",p);
    printf("the value at %u address is %d\n",p,*p);
    
    //increment operator
    p++;
    printf("\nAfter incrementing the value at %u address is %d\n",p,*p);
    
    
    //adding integer to a pointer 
    p=p+3;
    printf("\nAfter adding 3 to pointer  the value at %u address is %d\n",p,*p);
    
    
    p=p-1;//subtracting integer to a pointer 
    printf("\nAfter subtracting 1 to the pointer  the value at %u address is %d\n",p,*p);
    
    
    p--; //decrementing the pointer 
    printf("\nAfter decrementing the value at %u address is %d\n",p,*p);
    
    
    //subtracting two pointer we get the DISTANCE BETWEEN THE TWO array elemnets  
    printf("\nsubrating two pointer p having address %u and q having address %u is %d\n",p,q,p-q);


    //comapring pointers
    int a=34,b=98; 
    int *ptr1=&a;
    int *ptr2=&b;
    if (*ptr1>*ptr2)
    {
        printf("%d is graeter \n",*ptr1);
    }
    if (*ptr1<*ptr2)
    {
        printf("%d is graeter \n",*ptr2);
    }
    if (*ptr1==*ptr2)
    {
        printf("%d is equal to %d \n",*ptr1,*ptr2);
    }
    if (*ptr1!=*ptr2)
    {
        printf("%d is not equal to %d \n",*ptr1,*ptr2);
    }
    
}