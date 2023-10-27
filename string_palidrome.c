//string reverse same as string (plaidrome)
#include<stdio.h>
main()
{
	char str[10];
	int len,i,flag=0;
	
	printf("enter a string :");
	scanf("%s",&str);
	
	len=strlen(str);
	for(i=0;i<len/2;i++)
	{
		if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
	}
	if(flag)
	{
		printf("string is not palidrome");
	}
	else
	{
		printf("string is palidorme");
	}
}
