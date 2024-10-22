// First Come First Serve CPU Scheduling Algorithms
// 12 September 2024 BPMCE Computer Centre
#include <stdio.h>
int main()
{

    int bt[20], wt[20], tat[20], i, n;
    float wtavg = 0, tatavg = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter burst time for process p%d: ", i);
        scanf("%d", &bt[i]);
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
        printf("P%d\t\t%d\t\t%d\t\t%d\n", i, bt[i], wt[i], tat[i]);
    }

    wtavg /= n;
    tatavg /= n;

    printf("Average Waiting Time: %f\n", wtavg);
    printf("Average Turnaround Time: %f\n", tatavg);

    return 0;
}

/*
OUTPUT
Enter the number of processes: 6
Enter burst time for process p0: 12
Enter burst time for process p1: 5
Enter burst time for process p2: 9
Enter burst time for process p3: 23
Enter burst time for process p4: 18
Enter burst time for process p5: 31
PROCESS BURST TIME      WAITING TIME    TURNAROUND TIME
P0              12              0               12
P1              5               12              17
P2              9               17              26
P3              23              26              49
P4              18              49              67
P5              31              67              98
Average Waiting Time: 28.500000
Average Turnaround Time: 44.833332
*/