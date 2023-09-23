#include<stdio.h>
main(){
	int num;
	printf("\n Enter number : ");
	scanf("%d",&num);
	if(num==0)
	{
		printf("\n Number is zero.");
	}
	else if(num<0)
	{
		printf("\n Number is negative.");
	}
	else{
		printf("\n Number is positive.");
	}
}
