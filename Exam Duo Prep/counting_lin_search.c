//linear seraching in array
#include <stdio.h>
int main()
{
    int i,search,flag=0,count=0;
    long int arr[100]={22401,22439,22343,22407,22401,22456,22401,22439,22602,22343,22309,22343}; //predefined array u can make this user defined also 
    printf("Enter Your Roll Number :\t");
    scanf("%d",&search);
    for (i=0;i<100;i++)
    {
        if (search==arr[i]) //on satifying the condition
        {
            flag=1; //if search found flag would be 1 
            count++; //count the no of times serach element is found in array
        }
    }
    //main condition starts from here
    if (flag==1)
    {
        printf("Search found %d times in the array",count);
    }
    else
    {
        printf("Search not found");
    }
    return 0;
}
