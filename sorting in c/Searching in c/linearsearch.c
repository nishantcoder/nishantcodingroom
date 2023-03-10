//linear seraching in array
#include <stdio.h>
int main()
{
    int i,search,flag=0;
    long int arr[10]={22401,22439,22343,22407}; //predefined array u can make this user defined also 
    printf("Enter Your Roll Number :\t");
    scanf("%d",&search);
    for (i=0;i<4;i++)
    {
        if (search==arr[i]) //on satifying the condition
        {
            flag=1; //if search found flag would be 1 
            break; //no need to search anymore if search is found
        }
    }
    //main condition starts from here
    if (flag==1)
    {
        printf("Search found");
    }
    else
    {
        printf("Search not found");
    }
    return 0;
}
