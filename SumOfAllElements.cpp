#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	int a[n];
	int *ptr=a;
	int i;
	int sum=0;
	printf("\nEnter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	printf("\nThe sum of all numbers in the array is %d",sum);
}
