// Least Recently Used (LRU) Page Replacement Algorithm
// __ October 2024 BPMCE Computer Centre
#include <stdio.h>
#define page_size 16
#define frame_size 3

int main() {
    int page[page_size] = {7,0,1,2,0,3,0,4,2,3,0,3,2,0,1,2};
    int frame[frame_size];
    int access_time[frame_size];
    int page_hit = 0, page_fault = 0, time = 0;

    
    for (int i = 0; i < frame_size; i++) {
        frame[i] = -1;
        access_time[i] = -1;
    }


    for (int i = 0; i < page_size; i++) {
        int current_page = page[i];
        int found = 0,hit=0;

        
        time++; //access time

        
        for (int j = 0; j < frame_size; j++) {
            if (frame[j] == current_page) {
                found = 1;
                hit=1;
                page_hit++;
                access_time[j] = time; 
                break;
            }
        }


        if (!found) {
            int lru_index = 0;


            for (int j = 0; j < frame_size; j++) {
                if (frame[j] == -1) {
                    lru_index = j;
                    break;
                }
            }

            
            if (frame[lru_index] != -1) {
                int min_time = access_time[0];
                for (int j = 1; j < frame_size; j++) {
                    if (access_time[j] < min_time) {
                        min_time = access_time[j];
                        lru_index = j;
                    }
                }
            }

   
            frame[lru_index] = current_page;
            access_time[lru_index] = time; 
            page_fault++;
        }

        
        printf("Page %d: ", current_page);
        for (int j = 0; j < frame_size; j++) {
            if (frame[j] == -1) {
                printf(" - ");
            } else {
                printf(" %d ", frame[j]);
            }
        }
        if (hit)
        {
            printf(" * ");
        }
        
        printf("\n");
    }

    
    printf("\nTotal Page Hits: %d\n", page_hit);
    printf("Total Page Faults: %d\n", page_fault);

    return 0;
}
