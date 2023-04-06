#include<stdio.h>
int binary(int arr[],int search,int low,int up)
{
    while(low<=up)
    {
        int mid=(low+up)/2;
        if(arr[mid]==search)
        return mid;
        if(arr[mid]<search)
        low=mid+1;
        else
        up=mid-1;
    }
    return -1;
}
int main()
{
    int arr[]={22401,22402,22403,22404,22405,22439};
    int n = sizeof(arr)/sizeof(arr[0]);
    int search;
    printf("enter the no. to be searched\n");
    scanf("%d",&search);
    int result = binary(arr,search,0,n-1);
    if(result == -1)
    printf("search not found");
    else
    printf("search found");

}
