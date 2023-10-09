#include<stdio.h>

main()
{
	int i;
	printf("\n EVEN : ");
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			printf("\n %d",i);
		}
	}
	printf("\n\n ODD :");
	for(i=1;i<=10;i++)
	{
		if(i%2==1)
		{
			printf("\n %d",i);
		}
	}
}
