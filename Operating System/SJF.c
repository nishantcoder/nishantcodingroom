// Shortest Job First Scheduling Algorithms
// 19 September 2024 BPMCE Computer Centre

#include <stdio.h>

int main()
{
    int p[20], bt[20], wt[20], tat[20], i, j, n, temp;
    float wtavg = 0, tatavg = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        p[i] = i; // Store process ID
        printf("Enter burst time for process p%d: ", i);
        scanf("%d", &bt[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (bt[i] > bt[j])
            {
                // Swap burst times
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                // Swap process IDs
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    wt[0] = 0;

    for (i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    for (i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
    }

    for (i = 0; i < n; i++)
    {
        wtavg += wt[i];
        tatavg += tat[i];
    }

    printf("PROCESS\tBURST TIME\tWAITING TIME\tTURNAROUND TIME\n");
    for (i = 0; i < n; i++)
    {
        printf("P%d\t\t%d\t\t%d\t\t%d\n", p[i], bt[i], wt[i], tat[i]);
    }

    wtavg /= n;
    tatavg /= n;

    printf("Average Waiting Time: %f\n", wtavg);
    printf("Average Turnaround Time: %f\n", tatavg);

    return 0;
}
/*
OUTPUT
Enter the number of processes: 5
Enter burst time for process p0: 23
Enter burst time for process p1: 17
Enter burst time for process p2: 12
Enter burst time for process p3: 15
Enter burst time for process p4: 7
PROCESS BURST TIME      WAITING TIME    TURNAROUND TIME
P4              7               0               7
P2              12              7               19
P3              15              19              34
P1              17              34              51
P0              23              51              74
Average Waiting Time: 22.200001
Average Turnaround Time: 37.000000
*/