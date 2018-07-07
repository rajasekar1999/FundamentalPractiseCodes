#include<stdio.h>
#include<conio.h>

double power(int,int);

int main()
{
	double m;
	int n;
	printf("Enter the base and its exponent: \n");
	scanf("%lf %d",&m,&n);
	printf("The value of base %d to the power %d is %d",(int)m,n,(int)power(m,n));
}

double power(int a,int b)
{
	if(b==0)
	b=2;
	if(b==1)
	return a;
	else
	return a*power(a,b-1);	
}
