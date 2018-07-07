#include <stdio.h>
int inar(int*,int,int,int);
int main()
{
    int p,i,n,v;
    scanf("%d", &n);
    int a[n];
    for (i=0;i<n;i++)    
    scanf("%d", &a[i]);
    scanf("%d",&p);
    scanf("%d", &v);
   inar(&a[0],n,p,v);
    for (i=0;i<=n;i++)    
	printf("%d\n", a[i]);    
    return 0;
}
int inar(int *p,int a,int b,int c)
{
int i;
 for (i=a-1;i>=b-1;i--)    
	*(p+1+i) = *(p+i);
    *(p+b-1) = c;
}
