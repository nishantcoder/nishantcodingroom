//Scan Disk Scheduling
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n = 0, cur_head = 0, disk_size;
    
    printf("Enter the total number of tracks: ");
    scanf("%d", &n);

    printf("Enter the disk size (max track number): ");
    scanf("%d", &disk_size);

    printf("Enter the current head position: ");
    scanf("%d", &cur_head);

    int track[n + 2]; 
    track[0] = 0; 
    track[1] = cur_head; 

    printf("Enter the track requests: ");
    for (int i = 2; i < n + 2; i++) {
        scanf("%d", &track[i]);
    }

    for (int i = 0; i < n + 2; i++) {
        for (int j = 0; j < n + 2 - i - 1; j++) {
            if (track[j] > track[j + 1]) {
                int temp = track[j];
                track[j] = track[j + 1];
                track[j + 1] = temp;
            }
        }
    }


    int head_index = 0;
    for (int i = 0; i < n + 2; i++) {
        if (track[i] == cur_head) {
            head_index = i;
            break;
        }
    }

    int total_head_move = 0;
    printf("\nTrack traversal order: ");
    
    //right side move ke liye
    for (int i = head_index; i < n + 2; i++) {
        printf("%d -> ", track[i]);
        if (i != head_index)
            total_head_move += abs(track[i] - track[i - 1]);
    }
    
    // left side move krega
    for (int i = head_index - 1; i >= 0; i--) {
        printf("%d -> ", track[i]);
        total_head_move += abs(track[i] - track[i + 1]);
    }

    printf("\nTotal Head Movement: %d\n", total_head_move);
    return 0;
}

/*
OUTPUT
Enter the total number of tracks: 8
Enter the disk size (max track number): 200
Enter the current head position: 50
Enter the track requests: 176
79
34
60
92
11
41
114

Track traversal order: 50 -> 60 -> 79 -> 92 -> 114 -> 176 -> 41 -> 34 -> 11 -> 0 ->
Total Head Movement: 176
*/