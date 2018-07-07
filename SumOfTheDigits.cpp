#include<stdio.h>

int sod(int);

int main()
{
int n;
scanf("%d",&n);
printf("%d",sod(n));
}

int sod(int num)
{
	if(num==0)
	return 0;
	else 
	return (num%10)+sod(num/10);	
}
