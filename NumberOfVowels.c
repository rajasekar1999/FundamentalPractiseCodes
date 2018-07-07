#include<stdio.h>
#include<string.h>
int main()
{int ws=0,num=0;
	int v=0,c=0;
	char s[1000];
	scanf("%[^\n]",s);

int l=strlen(s);int i;
for(i=0;i<l;i++)
{if(s[i]==' ')
	ws++;
if((s[i]>=65&&s[i]<91)||(s[i]>=97&&s[i]<123))
{if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
	v++;
	else
	c++;
	}
if(s[i]>=48&&s[i]<58)
num++;


	}
	ws++;
	printf("%d %d %d %d",ws,v,c,num);
	
	}
