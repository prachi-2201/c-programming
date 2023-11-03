#include<stdio.h>
main()
{
	int arr[5],pos,i,j;
	for(i=0;i<5;i++)
	{
		printf("Enter array elements of index %d :",i);
		scanf("%d",&arr[i]);
	}
	printf("\n Array : \n");
	for(i=0;i<5;i++)
	{
		printf("\n %d ",arr[i]);
	}
	printf("\n Enter position to delete : ");
	scanf("%d",&pos);
	for(i=pos;i<4;i++)
	{
		arr[i]=arr[i+1];
	}
	printf("\n New Array : \n");
	for(i=0;i<4;i++)
	{
		printf("\n %d : %d",i,arr[i]);
	}
}

