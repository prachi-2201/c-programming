#include<stdio.h>
main(){
	int num,i=1,sum=0;
	printf("enter number : ");
	scanf("%d",&num);
	while(i<=num)
	{
		sum=sum+i;
		i++;
	}
	printf("sum = %d ",sum);
}
