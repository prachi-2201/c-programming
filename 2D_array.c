#include<stdio.h>
main()
{
	int i,j,arr[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter number at position %d %d : ",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("\n Array : \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
	
}
