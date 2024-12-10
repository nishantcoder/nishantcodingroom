#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n=0,cur_head=0;
    printf("Enter the Current head position : \t");
    scanf("%d",&cur_head);

    printf("Enter the no of tracks : \t");
    scanf("%d",&n);
    
    
    int queue[n];
    printf("Enter the tracks to be traversed : \t");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&queue[i]);
    }
    
    int total_head_move=0;
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d -> ",queue[i]);
        total_head_move+=abs(queue[i]-cur_head);
        cur_head=queue[i];
    }

    printf("\nTotal Head Movement %d ",total_head_move);
}