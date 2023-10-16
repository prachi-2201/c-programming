#include<stdio.h>
main(){
	char str[20];
	int len;
	
	printf("Input String : ");
	gets(str);
	
	len=strlen(str);
	
	printf("String :");
	puts(str);
	printf("the length of string : %d",len);
}
