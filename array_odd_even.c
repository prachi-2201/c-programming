#include<stdio.h>
main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("\n\n Enter value of element at position %d  ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n %d : even",a[i]);
		}
		else
		{
			printf("\n %d : odd",a[i]);
		}
	}
}
