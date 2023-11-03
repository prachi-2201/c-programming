#include<stdio.h>
main()
{
	int i,arr[20],n,max;
	printf("Enter length of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter elements of array :");
		scanf("%d",&arr[i]);
	}
	printf("\n Array :\n");
	for(i=0;i<n;i++)
	{
		printf("\n %d",arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\n maximun of all element is %d",max);
	
}
