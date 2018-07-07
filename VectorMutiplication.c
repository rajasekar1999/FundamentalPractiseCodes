#include<stdio.h>

struct vector
{
	int v[1000];
}vs[1000];
int main()
{
	int n,i,ns,j;
	scanf("%d",&n);
	int c[1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ns);
		c[i]=ns;
		for(j=0;j<ns;j++)
		{
			scanf("%d",&vs[i].v[j]);
		}
	}
	int p,q,s;
	scanf("%d %d",&p,&q);
	scanf("%d",&s);
	vs[p].v[q]*=s;
	
		for(i=0;i<n;i++)
	{
		
		printf("[");
		for(j=0;j<c[i]s;j++)
		{
			printf("%d ",vs[i].v[j]);
		}
		printf("\b]\n");
	}
}
