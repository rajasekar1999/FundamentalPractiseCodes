#include<stdio.h>

int lcm_gcd(int,int,int*,int*);
int main()

{
	int a,b;
	printf("Enter the pair of numbers: ");
	scanf("%d %d",&a,&b);
	int lcm=0,gcd=0;
	lcm_gcd(a,b,&lcm,&gcd);
	printf("The LCM and GCD of the numebrs are : %d, %d",lcm,gcd);
}

int lcm_gcd(int m,int n,int *p,int *q)
{
	int mc=m;
	int nc=n;
	while(m!=n)
	{
		if(m>n)
		m=m-n;
		else if(n>m)
		n=n-m;
	}
	*p=n;
	*q=(mc*nc)/n;
	
}
