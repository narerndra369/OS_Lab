#include<stdio.h>
void main(){
	int bt[20],wt[20],tat[20],i,n;
	float wtavg,tatavg;
	printf("\n Enter the number of procesess --");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n Enter Burst Time for process --");
		scanf("%d",&bt[i]);
	}
	wt[0]=wtavg=0;
	tat[0]=tatavg=bt[0];
	for(i=1;i<n;i++){
		wt[i]=wt[i-1]+bt[i-1];
		tat[i]=tat[i-1]+bt[i-1];
		wtavg=wtavg+wt[i];
		tatavg=tatavg+tat[i];
	}
	printf("\tProcesess\tBrust Time\tWaiting Time\tTrunc around Time\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t\t%d\t\t%d\t\t%d\n",i,bt[i],wt[i],tat[i]);
	}
	printf("Total average time taken for completion:%d",tat[n]);
}
