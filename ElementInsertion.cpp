#include<stdio.h>

int insert();

int main()
{
	insert();
}

int insert()
{
	int n,i,p,r;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n+1];
	printf("Enter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the posistion you want to insert: ");
	scanf("%d", &p);
	printf("Enter the element you want to insert: ");
	scanf("%d",&r);
	for(i=n+1;i>p-1;i--)
	{
		a[i]=a[i-1];
	}
	a[p-1]=r;
	printf("\nThe new array: \n");
	for(i=0;i<n+1;i++)
	{
		printf("%d ",a[i]);
	}
}
