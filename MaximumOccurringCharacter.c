#include<stdio.h>
int main()
{
	char str[1000];
	scanf("%[^\n]",str);
	int i,l=0,w=0;
	for(i=0;str[i]!='\0';i++)
	{ 
		l=l+1;
		if(str[i]==' ')
		w++;
		else
		printf("'%c' ",str[i]);
	}int j;
	int a[l];
	for(i=0;i<l;i++)
	{
		a[i]=0;
	}
	for(i=0;i<l;i++)
	{
	for(j=0;j<l;j++)
	{
	if(str[i]==str[j])
	a[i]++;
	}}
	int max=a[0];
	int index;
		for(i=0;i<l;i++)
	{
		if(a[i]>max)
		{
		max=a[i];
	index=i;
	}}
		

	printf("\n");
	printf("%d\n",l);printf("%d\n",w+1);
	printf("The most occuring word is %c and it repeats itself %d times",str[index],max);
	
}
