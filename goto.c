#include<stdio.h>
main()
{
	int num=9;
	if(num%2==0)
	{
		goto even;
	}
	else
	{
		goto odd;
	}
	even : printf("This number is even ...");
			exit(0);
	odd : printf("This number is odd ...");
			exit(0);
}
