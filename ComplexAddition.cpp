#include<stdio.h>

struct complex
{
int r;
int i;
};

int main()
{
	struct complex a,b;
	printf("Enter the real and imaginary part of complex number a: ");
	scanf("%d %d",&a.r,&a.i);
	printf("\nEnter the real and imaginary part of complex number b: ");
	scanf("%d %d",&b.r,&b.i);
	printf("\nTheir complex addition is %d+i%d",a.r+b.r,a.i+b.i);	
}
