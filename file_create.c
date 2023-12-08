#include<stdio.h>
main()
{
	FILE *fptr;
	fptr=fopen("file.txt","w");
	if(fptr==NULL)
	{
		printf("file is not opened");
	}
}
