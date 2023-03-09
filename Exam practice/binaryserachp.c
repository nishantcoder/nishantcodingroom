//nishant raj 22401
//remarks : 100% accuracy
#include <stdio.h>
int binarysearch(int arr[],int search,int low,int up)
{
    while(low<=up)
    {
        int mid=(low+up)/2;
        if(arr[mid]==search)
            return mid;
        if(arr[mid]<search)
            low=mid+1;
        else if(arr[mid]>search)
            up=mid-1;
    }
    return -1;
}
int main()
{
    int arr[]={22343,22401,22402,22439,22632};
    int n=sizeof(arr)/sizeof(arr[0]);
    int search;
    scanf("%d",&search);
    int result=binarysearch(arr,search,0,n-1);
    if(result==-1)
        printf("search not found");
    else
        printf("Search found");
}