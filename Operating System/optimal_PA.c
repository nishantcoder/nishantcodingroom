// Optimal Page Replacement Algorithm
// 03 December 2024 BPMCE Computer Centre
#include <stdio.h>
#define page_size 20
#define frame_size 3

int main() {
    int page[page_size] = {1,2,3,4,2,1,5,6,2,1,2,3,7,6,3,2,1,2,3,6};
    int frame[frame_size];
    int page_hit = 0, page_fault = 0;

    
    for (int i = 0; i < frame_size; i++) {
        frame[i] = -1;
    }

   
    for (int i = 0; i < page_size; i++) {
        int current_page = page[i];
        int found = 0,hit=0;

        for (int j = 0; j < frame_size; j++) {
            if (frame[j] == current_page) {
                found = 1;
                page_hit++;
                hit=1;
                break;
            }
        }

        if (!found) {
            int replace_index = -1;
            int max_future_use = -1;

           
            for (int j = 0; j < frame_size; j++) {
                if (frame[j] == -1) {
                    replace_index = j;
                    break;
                }
            }

         
            if (replace_index == -1) {
                for (int j = 0; j < frame_size; j++) {
                    int future_use = -1;

                 
                    for (int k = i + 1; k < page_size; k++) {
                        if (frame[j] == page[k]) {
                            future_use = k;
                            break;
                        }
                    }

                    
                    if (future_use == -1) {
                        replace_index = j;
                        break;
                    }

                    
                    if (future_use > max_future_use) {
                        max_future_use = future_use;
                        replace_index = j;
                    }
                }
            }

            
            frame[replace_index] = current_page;
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
