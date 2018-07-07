#include<stdio.h>
int al(int);
int ai(int,int*);
int main()
{
	int n;
	scanf("%d",&n);
	int l=al(n);
	int a[l];
	ai(n,a);
	int i;
	printf("[");
		for(i=0;i<l;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\b]");
}
int al(int t)
{int c;
	int j;
	for(j=1;j<=t;j++)
	{
	if(t%j==0)
	c++;	
	}
	
	return c;
}
int ai(int t,int *q)
{
	int k;
	for(k=1;k<=t;k++)
	{static int d=0;
		if(t%k==0)
		{
			*(q+d)=k;
			d++;
		}
	}
}
