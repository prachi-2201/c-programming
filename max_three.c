#include <stdio.h>
main(){
	int num1,num2,num3;
	printf("\n\n enter number 1 : ");
	scanf("%d",&num1);
	printf("\n\n enter number 2 : ");
	scanf("%d",&num2);
	printf("\n\n enter number 3 : ");
	scanf("%d",&num3);
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("number 1 is greatest ");
		}
		else{
			printf("number 3 is greatest");
		}	
	}
	else if(num2>num3)
	{
		printf("number 2 is greatest");
	}
	else{
		printf("number 3 is greatest");
	}
}
