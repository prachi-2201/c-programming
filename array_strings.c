//input strings and print them in array
#include<stdio.h>
main()
{
	char name[5][20];
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter name at position %d : ",i);
		scanf("%s",name[i]);
	}
	printf("\n Position \t : Names");
	for(i=0;i<5;i++)
	{
		printf("\n\t %d \t: %s ",i,name[i]);
	}
}
