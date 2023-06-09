#include <stdio.h>
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int i, j, min, n;
    printf("enter the no. of elements in an array\n...>");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of an array\n");
    for (i = 0; i < n; i++)
    {
        printf("...>");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
    printf("the sorted elements are:");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
