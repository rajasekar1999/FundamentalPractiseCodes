#include<stdio.h>

int perfect(int);

int main()
{
	int n;
	int i;
	printf("Enter the limit from 1 to ");
	scanf("%d",&n);
	printf("\n\nThe list of perfect numbers from 1 to %d : \n\n");
	for(i=1;i<=n;i++)
{
	if(perfect(i)==i)
	printf("%d\n",i);
}
}

int perfect(int num)
{
	int j;
	int s=0;
	for(j=1;j<=num/2;j++)
	{
		if(num%j==0)
		s+=j;
	}
	return s;	
}
