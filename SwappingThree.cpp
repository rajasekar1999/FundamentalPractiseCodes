#include<stdio.h>

int swap(int*,int*);

int main()
{
	int a,b,c;
	printf("Enter the three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	swap(&a,&b);
	swap(&a,&c);
	printf("%d %d %d",a,b,c);
}

int swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

