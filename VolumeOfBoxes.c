#include<stdio.h>
struct box
{
	int l;
	int b;
	int h;
	int v;
}b[100];
int main()
{int n;int i,j;
scanf("%d",&n);
int t;
for(i=0;i<n;i++)
	{
	scanf("%d %d %d",&b[i].l,&b[i].b,&b[i].h);
b[i].v=b[i].l*b[i].b*b[i].h;
}
for(i=0;i<n;i++)
	{
	printf("%d %d %d %d",b[i].l,b[i].b,b[i].h,b[i].v);
printf("\n");
}
printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-i-1;j++)
		{
			if(b[j].v>b[j+1].v)
			{
				t=b[j].v;
				b[j].v=b[j+1].v;
				b[j+1].v=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	printf("%d %d %d %d",b[i].l,b[i].b,b[i].h,b[i].v);
printf("\n");
}
}
