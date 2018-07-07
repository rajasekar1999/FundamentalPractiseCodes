#include<stdio.h>

int power(int);
int bin(int);

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("\nThe binary form of the number: %d",bin(n));
	return 0;
}

int power(int num)
{
	if(num==0)
	return 1;
	else if(num==1)
	return 10;
	else
	return 10*(power(num-1));
}

int bin(int t)
{
	int b=0;
	int i=0;

do
{
	b=b+((t%2)*power(i));
	t=t/2;
	i++;
}while(t!=1);
	b=b+(power(i));
	return b;
}
