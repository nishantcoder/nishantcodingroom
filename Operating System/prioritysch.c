// Priority Scheduling Algorithms
//  16 October 2024 BPMCE Computer Centre
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    int burst_time[n],priority[n],wt[n],tat[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Burst Time and Priority for Process %d: ", i + 1);
        scanf("%d %d", &burst_time[i], &priority[i]);
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (priority[j] > priority[j + 1]) {
                // Swap burst time
                int temp_bt = burst_time[j];
                burst_time[j] = burst_time[j + 1];
                burst_time[j + 1] = temp_bt;

                // Swap priority
                int temp_pr = priority[j];
                priority[j] = priority[j + 1];
                priority[j + 1] = temp_pr;
            }
        }
    }


    wt[0] = 0; 
    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + burst_time[i - 1];
    }

    for (int i = 0; i < n; i++) {
        tat[i] = wt[i] + burst_time[i];
    }


    printf("\nProcess\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, burst_time[i], priority[i], wt[i], tat[i]);
    }

    return 0;
}

/*OUTPUT
Enter number of processes: 5
Enter Burst Time and Priority for Process 1: 5 2
Enter Burst Time and Priority for Process 2: 9 4
Enter Burst Time and Priority for Process 3: 7 1
Enter Burst Time and Priority for Process 4: 2 3
Enter Burst Time and Priority for Process 5: 8 5

Process Burst Time      Priority        Waiting Time    Turnaround Time
1       7               1               0               7
2       5               2               7               12
3       2               3               12              14
4       9               4               14              23
5       8               5               23              31
*/