#include<stdio.h>
main()
{
	FILE *fptr;
	char data[30]="Welcome to c";
	fptr=fopen("file.txt","w");
	if(fptr==NULL)
	{
		printf("file is not opened");
	}
	else
	{
		if(fptr!=EOF)
		{
			fputs(data,fptr);
		}
	}
}
