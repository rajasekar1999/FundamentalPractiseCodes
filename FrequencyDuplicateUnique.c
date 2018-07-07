#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}

	max++;
	int f[max];
		for(i=0;i<max;i++)
	{
		f[i]=0;
	}
for(i=0;i<n;i++)
{
	f[a[i]]++;
}
	for(i=0;i<max;i++)
	{
		if(f[i]!=0)
		printf("The number %d appears %d times\n",i,f[i]);
	}
	printf("The duplicate elements are:[");
	for(i=0;i<max;i++)
	{if(f[i]!=0)
	{
		if(f[i]!=1)
		printf("%d ",i);
	}
	}
	printf("\b]");
		printf("The unique elements are:[");
	for(i=0;i<max;i++)
	{if(f[i]!=0)
	{
		if(f[i]==1)
		printf("%d ",i);
	}
	}
	printf("\b]");
	
	
}
