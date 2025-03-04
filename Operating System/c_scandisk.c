#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int t[20], d[20], atr[20], h, i, j, n, temp, tot, p = 0, sum = 0, head_index;

    printf("Enter the number of tracks to be traversed: ");
    scanf("%d", &n);

    printf("Enter the total number of cylinders: ");
    scanf("%d", &tot);

    printf("Enter the head position: ");
    scanf("%d", &h);

    t[0] = 0;       
    t[1] = tot - 1; 
    t[2] = h;       

    printf("Enter the track requests: ");
    for (i = 3; i < n + 3; i++) {
        scanf("%d", &t[i]);
    }


    for (i = 0; i < n + 3; i++) {
        for (j = 0; j < (n + 3) - i - 1; j++) {
            if (t[j] > t[j + 1]) {
                temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
        }
    }


    for (i = 0; i < n + 3; i++) {
        if (t[i] == h) {
            head_index = i;
            break;
        }
    }

   
    for (i = head_index; i < n + 3; i++) {
        atr[p++] = t[i];
    }


    for (i = 0; i < head_index; i++) {
        atr[p++] = t[i];
    }

 
    for (i = 0; i < p - 1; i++) {
        d[i] = abs((atr[i] - atr[i + 1]));
        sum += d[i];
    }

    printf("\nTotal head movements: %d\n", sum);
    return 0;
}

/*
OUTPUT
Enter the number of tracks to be traversed: 8
Enter the total number of cylinders: 200
Enter the head position: 50
Enter the track requests: 176
79
34
60
92
11
41
114

Total head movements: 389

*/