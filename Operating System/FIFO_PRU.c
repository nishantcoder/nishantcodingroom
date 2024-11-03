// First In First Out Page Replacement Algorithm
// __ October 2024 BPMCE Computer Centre
#include <stdio.h>
#define page_size 10
#define frame_size 3

int main(){
    int page[page_size]={1,2,5,1,7,3,4,1,3,2};
    int frame[frame_size];
    int page_hit=0,page_fault=0;
    int index=0;

    for (int i = 0; i < frame_size; i++)
    {
        frame[i]=-1;
    }

    for (int i = 0; i < page_size; i++)
    {
        int current_page=page[i];
        int found=0,hit=0;

        for (int j = 0; j < frame_size; j++)
        {
            if (frame[j]==current_page)
            {
                found=1;
                hit=1;
                page_hit++;
                break;
            }
            
        }

        if (!found)
        {
            frame[index]=current_page;
            index=(index+1)%frame_size;
            page_fault++;
        }

        printf("page %d ",current_page);
        for (int j = 0; j < frame_size; j++)
        {
            if (frame[j]==-1)
            {
                printf(" - ");
            }
            else
            {
                printf(" %d ",frame[j]);
            }
            
            
        } 
        if(hit){
            printf(" * ");
        }
        printf("\n");
        
    }
    printf("Total Page Hits %d\n",page_hit);
    printf("Total Page Faults %d\n",page_fault);

    return 0;
}
/*
OUTPUT 
page 1  1  -  - 
page 2  1  2  - 
page 5  1  2  5 
page 1  1  2  5  * 
page 7  7  2  5 
page 3  7  3  5 
page 4  7  3  4 
page 1  1  3  4 
page 3  1  3  4  * 
page 2  1  2  4 
Total Page Hits 2
Total Page Faults 8
*/