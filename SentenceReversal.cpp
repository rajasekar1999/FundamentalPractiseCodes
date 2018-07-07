#include<stdio.h>
#include<string.h>

void reverse(char[],int );

int main()
{
	int i;
	char s[1000];
	printf("Enter the sentence: \n\n");
	scanf("%[^\n]",s);
	
	int l=strlen(s);
	printf("\nThe reversal of the enterred sentence is : \n\n");
	reverse(s,l);
}

void reverse(char str[],int l)
{
	if(l==1)
	printf("%c",str[l-1]);
	else
{
	printf("%c",str[l-1]);
	reverse(str,l-1);
}	
}
