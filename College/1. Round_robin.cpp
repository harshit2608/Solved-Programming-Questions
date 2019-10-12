#include<stdio.h>

void findWaitingTime(int processes[], int n, int bt[], int wt[], int quantum)
{
	int rem_bt[n];
	for (int i = 0 ; i < n ; i++)
		rem_bt[i] = bt[i];

	int t = 0;
    while (1)
	{
		int done = 1;

		for (int i = 0 ; i < n; i++)
		{
			if (rem_bt[i] > 0)
			{
				done = 0;

				if (rem_bt[i] > quantum)
				{
					t += quantum;

					rem_bt[i] -= quantum;
				}

				else
				{
					t = t + rem_bt[i];

					wt[i] = t - bt[i];

					rem_bt[i] = 0;
				}
			}
		}

		if (done == 1)
		break;
	}
}

void findTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[])
{
	for (int i = 0; i < n ; i++)
		tat[i] = bt[i] + wt[i];
}

void findavgTime(int processes[], int n, int bt[], int quantum)
{
	int wt[n], tat[n], total_wt = 0, total_tat = 0;

	findWaitingTime(processes, n, bt, wt, quantum);

	findTurnAroundTime(processes, n, bt, wt, tat);

	printf("Processes\tBurst Time\tWaiting time\tTurn Around Time\n");

	for (int i=0; i<n; i++)
	{
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		printf("    %d\t\t   %d\t\t    %d\t\t\t%d\n", i+1, bt[i], wt[i], tat[i]);
	}

	printf("\n\nAverage waiting time = %f", (float)total_wt / (float)n);
    printf("\nAverage turn around time = %f\n\n", (float)total_tat / (float)n);
}

int main()
{
	int processes[] = { 1, 2, 3, 4};
	int n = sizeof processes / sizeof processes[0];

	int bt[] = {5, 4, 2, 1};

	int quantum = 2;
	findavgTime(processes, n, bt, quantum);
	return 0;
}
