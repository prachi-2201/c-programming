#include<stdio.h>
main(){
	int num[9],i,sum=0;
	for(i=0;i<=9;i++)
	{
		printf("\n \t enter number at index %d ",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<=9;i++)
	{
		printf("\n \t Array of a[%d] : %d ",i,num[i]);
		sum=sum+num[i];
	}
	printf("\n\n\t sum of numbers : %d ",sum);
}
