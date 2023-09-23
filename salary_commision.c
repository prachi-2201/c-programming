//if salary more than 5000 give comission
#include<stdio.h>
main()
{
	int salary;
	printf("\n\n Enter employee salary : ");
	scanf("%d",&salary);
	if(salary>=5000)
	{
		printf("\n\n Comission is granted to employee ");
	}
	else{
		printf("\n\n Not eligible for comission");
	}
}
