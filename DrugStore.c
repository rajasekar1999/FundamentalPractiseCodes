#include<stdio.h>
void geti(int);
void getcurdt();

struct ed
{
int m;
int y;	
}date,cd;
struct drugs{
	int dc;
	char dn[30];
	struct ed date;
	int c;
}d[1000];
int exp_drugs(struct drugs[],struct ed,int);
int main()
{	
	int n;
	scanf("%d",&n);
	int j;
	for(j=0;j<n;j++)
	{
		printf("Enter code,name,expiry date in mm yyyy, drug count:\n");
		geti(j);
	}
	getcurdt();
	printf("%d",exp_drugs(d,cd,n));
	
	
}
void geti(int i)
{
	scanf("%d",&d[i].dc);
		scanf("%s",&d[i].dn);
		scanf("%d",&d[i].date.m);
		scanf("%d",&d[i].date.y);
		scanf("%d",&d[i].c);
}
void getcurdt()
{	
printf("Enter Current Date");
	scanf("%d",&cd.m);
	scanf("%d",&cd.y);
}
int exp_drugs(struct drugs d[],struct ed cd,int num)
{int i;
int sum=0;
	for(i=0;i<num;i++)
	{
		if(cd.y>d[i].date.y)
		sum=sum+d[i].c;
		else if(cd.y==d[i].date.y)
		{
			if(cd.m>d[i].date.m)
			sum=sum+d[i].c;
		}
	}
	return sum;
}


