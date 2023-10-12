#include<stdio.h>
main(){
	int i=1,num,sum=0;
	input:
		printf("\n\t Enter a number : ");
		scanf("%d",&num);
		
		sum=sum+num;
		i++;
		
		if(i<=5)
		{
			goto input;
		}
		else
		{
			printf("\n\t Sum =%d",sum);
		}
}
