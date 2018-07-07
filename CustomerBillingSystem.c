#include<stdio.h>
int rau(int );
int display(int);
struct cusb
{
	char name[30];
	char street[30];
	char city[20];
	long acc_no;
	float pb;
	float cp;
	float nb;
	char date[10];
	char *acc_type;
	 
}c[1000];

int main()
{
	int n;
	printf("Enter number of customer's details to be processed");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	rau(i);
	
	for(i=0;i<n;i++)
	display(i);
	
	
	
}
int rau(int j)
{printf("Enter name,street,city,acc no,previous balance, current payment,date");
	scanf("%s %s %s %ld %f %f %s",c[j].name,c[j].street,c[j].city,&c[j].acc_no,&c[j].pb,&c[j].cp,c[j].date);
	if(c[j].cp>0&&c[j].cp<(0.1*c[j].pb))
	c[j].acc_type="OverDue";
	else if(c[j].pb>0&&c[j].cp==0)
	c[j].acc_type="Delinquent";
	else
	c[j].acc_type="Current";
c[j].nb=c[j].pb-c[j].cp;

}
int display(int j)
{
	printf("Name:%s \nStreet:%s \nCity:%s \nAccno:%ld\nPrevious Balance: %f\n Current Paymrnt:%f\n Account Type: %s\nNew Balance: %f\nDate:%s  ",c[j].name,c[j].street,c[j].city,c[j].acc_no,c[j].pb,c[j].cp,c[j].acc_type,c[j].nb,c[j].date);
}
