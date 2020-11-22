#include<stdio.h>
 int main()
{
    int bt[20],p[20],wt[20],tat[20],n,i,temp,j;
    printf("Enter number of process:");
    scanf("%d",&n);
  
    printf("\nEnter Burst Time:\n");
    for(i=0;i<n;i++)
   {    printf("p%d:",i+1);
        scanf("%d",&bt[i]);       
		p[i]=i+1;
   }

   for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(bt[j]<bt[i])
        {
	    temp=bt[i];
        bt[i]=bt[j];
        bt[j]=temp;
  
        temp=p[i];
        p[i]=p[j];
        p[j]=temp;
    }} }
    wt[0]=0;
	int total=0;            
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]=wt[i]+bt[j];
        total=total+wt[i];
    }
    float avg_wt,avg_tat;
    avg_wt=total/n;
    int total1=0;
  
    printf("\nProcess\t    Burst Time    \tWaiting Time\t  Turnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];   
        total=total+tat[i];
        printf("\np%d\t\t  %d\t\t    %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
    }
  
    avg_tat=total1/n;    
    printf("\nAverage Waiting Time=%f",avg_wt);
    printf("\nAverage Turnaround Time=%f",avg_tat);
}
