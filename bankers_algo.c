//Banker's Algorithm
//Divyansh Singh
//1805661

#include<stdio.h>
int main()
{
	int ta,tb,tc,n,sa=0,sb=0,sc=0;
	printf("Enter the number of processes : ");
	scanf("%d",&n);
	printf("Enter the total availability of A, B, C : ");
	scanf("%d %d %d",&ta,&tb,&tc);
	int allocation[n][3],need[n][3],avail[3],remain[n][3],ans[n],k=0;
	printf("Enter the allocation of A, B, C for %d processes : \n",n);
	for(int i=0 ; i<n ; i++)
	{
		scanf("%d %d %d",&allocation[i][0],&allocation[i][1],&allocation[i][2]);
		sa+=allocation[i][0];
		sb+=allocation[i][1];
		sc+=allocation[i][2];
	}
	printf("Enter the need of A, B, C for %d processes : \n",n);
	for(int i=0 ; i<n ; i++)
	{
		scanf("%d %d %d",&need[i][0],&need[i][1],&need[i][2]);
		remain[i][0]=need[i][0]-allocation[i][0];
		remain[i][1]=need[i][1]-allocation[i][1];
		remain[i][2]=need[i][2]-allocation[i][2];
	}
	avail[0]=ta-sa;
	avail[1]=tb-sb;
	avail[2]=tc-sc;
	while(avail[0]!=ta ||avail[1]!=tb ||avail[2]!=tc)
	{
		for(int i=0 ; i<n ; i++)
		{
			if(remain[i][0]<=avail[0] && remain[i][1]<=avail[1] && remain[i][2]<=avail[2] && remain[i][0]!=-1 && remain[i][1]!=-1 && remain[i][2]!=-1 )
			{
				ans[k++]=i+1;
				avail[0]+=allocation[i][0];
				avail[1]+=allocation[i][1];
				avail[2]+=allocation[i][2];
				remain[i][0]=-1;
				remain[i][1]=-1;
				remain[i][2]=-1;
			}
		}
	}
	for(int i=0 ; i<k ; i++)
		printf("P%d -> ",ans[i]);
	printf("\n");
	return 0;
}
