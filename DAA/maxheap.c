#include <stdio.h>
int exchange(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int n=0;
    printf("Enter the size of heap :");
    scanf("%d",&n);
    int heap[n+1];
    printf("Enter the elements present in heap level by level:\n");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&heap[i]);
    }
    int node=(n/2);
    int leaf=node+1;
    printf("\nbefore max-heap");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",heap[i]);
    }
    
    while(node)
    {
        int left=2*node;
        int right=(2*node)+1;
        if (left<=n)
        {
            if (heap[node]<heap[left])
            {
                exchange(&heap[node],&heap[left]);
            }
        }
        
        if (right<=n)
        {
            if (heap[node]<heap[right])
            {
                exchange(&heap[node],&heap[right]);
            }
        }
        
        
        node--;
    }
    printf("\nAfter max-heap");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",heap[i]);
    }
    
}