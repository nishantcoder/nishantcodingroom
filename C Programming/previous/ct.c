// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   int arr[n];
   int i;
   for (i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
       printf("index [%d] = %d",i,arr[i]);
   }
   int flag=0;
   for (i=0;i<n;i++)
   {
    if (arr[i]>flag)
    {
        flag=arr[i];
    }
   }
   printf("\n%d\n",flag);
   int sum=0;
   for (i=0;i<n;i++)
   {
    sum+=arr[i];
   }
   printf("%d",sum);
    return sum;
}