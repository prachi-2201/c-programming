// search array element
#include<stdio.h>
main()
{
	int a[5],i,element,flag=0;
	for(i=0;i<5;i++)
	{
		printf("\n\n Enter value of element at position %d  ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter element you want to search in array : ");
	scanf("%d",&element);
	for(i=0;i<5;i++)
	{
		if(a[i]==element)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("element is presnet in array");
	}
	else
	{
		printf("element is not present in array");
	}
}
