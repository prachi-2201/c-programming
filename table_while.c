#include<stdio.h>
main(){
	int num,i=1;
	printf("enter number : ");
	scanf("%d",&num);
	while(i<=10)
	{
		printf("\n  %d  X  %d  =  %d",num,i,i*num);
		i++;
	}
	
}
