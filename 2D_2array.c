#include<stdio.h>
main()
{
	int i,j,arr1[3][3],arr2[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter elements of array 1 : ");
			scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n Array 1 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter elements of array 2 : ");
			scanf("%d",&arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n Array 2 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
}
