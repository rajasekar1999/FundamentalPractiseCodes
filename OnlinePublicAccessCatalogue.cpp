#include<stdio.h>
#include<string.h>

struct pubd
{
	int month;
	int year;
}p;
struct book 
{
	int accno;
	char title[30];
	float price;
	struct pubd p;
}b[100];
int main()
{
	int n,i;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter accno, title, price and date in month and year: \n");
		scanf("%d",&b[i].accno);
		scanf("%s",b[i].title);
		scanf("%f",&b[i].price);
		scanf("%d %d",&b[i].p.month,&b[i].p.year);
	}
	
	printf("\n\nEnter the title of the book to be searched: ");
	char st[30];
	scanf("%s",st);
	for(i=0;i<n;i++)
	{
		if(strcmp(st,b[i].title)==0)
		{printf("The details of the book searched are: \n");
		printf("Accno: %d\n",b[i].accno);
		printf("Title: %s\n",b[i].title);
		printf("Price: %.2f\n",b[i].price);
		printf("Month Year: %d %d\n",b[i].p.month,b[i].p.year);
	}
	}
	
	int cy;
	printf("\nEnter search year: ");
	scanf("%d",&cy);
	
		for(i=0;i<n;i++)
	{
		if(cy==b[i].p.year)
		printf("\nTitle: %s\n",b[i].title);
	}
}
