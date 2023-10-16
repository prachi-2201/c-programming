#include<stdio.h>
main(){
	char str1[10],str2[10];
	printf("Input String: ");
	gets(str1);
	printf("Input String 2: ");
	gets(str2);
	if(strcmpi(str1,str2)==0)  //strcmp for not ignoring case //strcmpifor ignoring case
	{
		printf("string are equal..");
	}
	else
	{
		printf("string are not equal..");
	}
}
