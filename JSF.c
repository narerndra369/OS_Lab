#include<stdio.h>

int main()
{
	int bt[20],wt[20],tt[20],i,n,p[i],k;
	float wtavg,ttavg;
	printf("Enter the no of Processes:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p[i]=i;
		printf("Enter Burst Time for Process %d:",i+1);
		scanf("%d",&bt[i]);
	}
	for(i=0;i<n;i++)
	{
		for(k=i+1;k<n;k++)
		{
			if(bt[i]>bt[k])
			{
				int temp=bt[i];
				bt[i]=bt[k];
				bt[k]=temp;
				
				temp=p[i];
				p[i]=p[k];
				p[k]=temp;
			}		
		}
	}
	wt[0]=wtavg=0;
	tt[0]=ttavg=bt[0];
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		tt[i]=tt[i-1]+bt[i];
		wtavg +=wt[i];
		ttavg +=tt[i];
	}
	printf("\nProcess\t\tBurst Time\t\tWaiting Time\t\tTurnaround Time\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t\t%d\t\t%d\t\t\t\t%d\n",p[i],bt[i],wt[i],tt[i]);
	}
	printf("\nThe average Waiting Time:%f",wtavg);
	printf("\nThe average Turnaround Time:%f\n",ttavg);
	return 0;
}
