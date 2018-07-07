#include<stdio.h>
#include<conio.h>
#include<math.h>

float increase(int);

struct emprec

{
	
	int id;
	char name[30];
	float salary;
	char dptname[20];
	
}	er[100];

int main()

{

	int ch;
	int n;
	printf("Enter number of employees you want to store data of: ");
	scanf("%d",&n);	
	int i;
	for(i=0;i<n;i++)

{
	printf("\nEnter id: ");
	scanf("%d",&er[i].id);
	printf("\nEnter name: ");
	scanf("%s",er[i].name);
	printf("\nEnter salary: ");
	scanf("%f",&er[i].salary);
	printf("\nEnter dept name: ");
	scanf("%s",er[i].dptname);
}

do

{
	int idin,index;
	printf("\nEnter the id of the employee to raise salary\n");
	scanf("%d",&idin);
	for(i=0;i<n;i++)
	{
		if(idin==er[i].id)
			{				
				index=i;	
			}
	}
	
er[index].salary=increase(index);

printf("\nThe salary of %s has been increased to %f\n",er[index].name,er[index].salary);

printf("\nEnter 'y' to retry, 'n' to close: ");

	scanf("%d",&ch);
	
}
while(ch=='y');
	return 0;
}
	
float increase(int d)
{
	return er[d].salary+(0.1*er[d].salary);
}
