#include<stdio.h>
int fact(int);
int main()
{int sum=0;
	int i;
	for(i=1;i<=5;i++)
	{
		sum=sum+(fact(i)/i);
	}
	printf("%d",sum);
}
int fact(int num)
{
	if(num==0||num==1)
	return 1;
	else
	return num*fact(num-1);
}
