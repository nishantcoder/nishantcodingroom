// Round Robin Scheduling Algorithms
// 26 September 2024 BPMCE Computer Centre
#include <stdio.h>
int main() {
    int i, n, t, max, flag = 0;
    int quan_time;
    int bt[20], wt[20], tat[20], rt[20];
    float wtavg = 0, tatavg = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);
    max = n; 

    for (i = 0; i < n; i++) {
        printf("Enter burst time for process p%d: ", i);
        scanf("%d", &bt[i]);
        rt[i] = bt[i]; 
        wt[i] = 0;   
    }

    printf("Enter the time quantum: ");
    scanf("%d", &quan_time);

    int time = 0;
    i = 0;
    
    while (max != 0) {
        if (rt[i] > 0) {
            if (rt[i] > quan_time) {
                time += quan_time;
                rt[i] -= quan_time;
            } else {
                time += rt[i];
                wt[i] = time - bt[i]; 
                rt[i] = 0; 
                max--; 
                flag = 1;
            }
        }
        

        if (flag == 1) {
            tat[i] = bt[i] + wt[i]; 
            flag = 0;
        }

        i = (i + 1) % n; 
    }

    printf("PROCESS\tBURST TIME\tWAITING TIME\tTURNAROUND TIME\n");
    for (i = 0; i < n; i++) {
        wtavg += wt[i];
        tatavg += tat[i];
        printf("P%d\t\t%d\t\t%d\t\t%d\n", i, bt[i], wt[i], tat[i]);
    }

    wtavg /= n;
    tatavg /= n;

    printf("Average Waiting Time: %.2f\n", wtavg);
    printf("Average Turnaround Time: %.2f\n", tatavg);

    return 0;
}
/*Output
Enter the number of processes: 4
Enter burst time for process p0: 12
Enter burst time for process p1: 7
Enter burst time for process p2: 3
Enter burst time for process p3: 9
Enter the time quantum: 4
PROCESS BURST TIME      WAITING TIME    TURNAROUND TIME
P0              12              18              30
P1              7               15              22
P2              3               8               11
P3              9               22              31
Average Waiting Time: 15.75
Average Turnaround Time: 23.50
*/