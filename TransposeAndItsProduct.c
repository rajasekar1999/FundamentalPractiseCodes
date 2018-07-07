#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int i,j;
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int at[n][m];
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			at[i][j]=a[j][i];
		}
	}
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			
			printf("%d ",at[i][j]);
		}
		printf("\n");
	}
	int k;
	int sum=0;
	int p[m][m];
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
			sum=sum+a[j][k]*at[k][i];
		}
		p[i][j]=sum;
		sum=0;
		}
	}	
		for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	
}
