 #include<stdio.h>
 main()
 {
 	int i,arr[20],n,e,flag=0,index=0;
 	printf("\n Enter length of array : ");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		printf("\n Enter element of array at position %d :",i);
 		scanf("%d",&arr[i]);
	}
	printf("\nArray:\n");
	for(i=0;i<n;i++)
	{
		printf("\n %d",arr[i]);
	}
	printf("\nEnter element you want to delete : ");
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		if(arr[i]==e)
		{
			flag=1;
			index=i;
		}
	}
	if(flag==0)
	{
		printf("element not found");
	}
	else
	{
		for(i=index;i<n-1;i++)
		{
			arr[i]=arr[i+1];
		}
	}
	printf("\nNew Array :\n");
	for(i=0;i<n-1;i++)
	{
		printf("\n %d : %d",i,arr[i]);
	}
 }
