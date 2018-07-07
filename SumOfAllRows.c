#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int i,j;
	int a[m][n];
	

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		
		}
	}
			
			int rs[m];
			for(i=0;i<m;i++)
			{
				rs[i]=0;
			}
	int *p;
	p=rs;	
			for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{int temp=a[i][j];
			*(p+i)=*(p+i)+temp;	
		}
	}
	for(i=0;i<m;i++)
	{
		printf("Row sum [%d] is %d\n",i,*(p+i));
	}
	
	
	
}
