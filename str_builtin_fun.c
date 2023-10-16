#include<stdio.h>
main(){
	char str[20],str1[5],str2[10];
	int len;
	
	printf("Input String : ");
	gets(str);
	printf("Input String 2: ");
	gets(str1);
	
	printf("String :");
	puts(str);
	puts(str1);
	printf("\n\n the capitalize of string : %s",strupr(str));
	
	printf("\n\n the lower of string : %s",strlwr(str));
	
	printf("\n\n string concatenate %s",strcat(str,str1));
	
	printf("\n\n the reverse of string : %s",strrev(str));
	
}
