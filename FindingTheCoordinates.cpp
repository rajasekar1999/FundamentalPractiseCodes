#include<stdio.h>

int main()
{
	int x,y;
	printf("Enter the x and y co-ordinates: ");
	scanf("%d %d",&x,&y);
	if(x>0&&y>0)
	printf("I");
	else if(x<0&&y>0)
	printf("II");
	else if(x<0&&y<0)
	printf("III");
	else if(x>0&&y<0)
	printf("IV");
	else if(x==0&&y==0)
	printf("Origin");
}
