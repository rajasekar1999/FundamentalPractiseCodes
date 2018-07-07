#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{

	int n;
	int up=0,lp=0;
	printf("Enter the order of matrix n: ");
	scanf("%d",&n);
	int m[n][n];
	int i,j;
	for(i=0;i<n;i++)
{
	
	for(j=0;j<n;j++)
{
	
	printf("\nEnter the value of m[%d][%d]: ",i,j);
	scanf("%d",&m[i][j]);

}

}
	printf("\nYour array looks like this\n\n");

	for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
{

	printf("%d ",m[i][j]);
	if(j>i&&m[i][j]!=0)
	up=1;
	if(j<i&&m[i][j]!=0)
	lp=1;
	
}
	printf("\n");
}
	if(up==0)
{

	if(lp==0)
	printf("\nDiagnol");
	else if(lp!=0)
	printf("\nUpper");

}
	else
{
	if(lp==0)
	printf("\nLower");
	else if(lp!=0)
	printf("\nNormal");
}

}
