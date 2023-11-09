#include<stdio.h>
main()
{
	int arr[3][3][3]={ {{1,2,3},{4,5,6},{7,8,9}},
					   {{1,2,3},{4,5,6},{7,8,9}},
					   {{1,2,3},{4,5,6},{7,8,9}}
					};
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("Enter elements of array : ");
				scanf("%d",&arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d\t",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
