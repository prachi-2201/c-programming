#include<stdio.h>
main(){
	char str1[10],str2[10];
	printf("Input String: ");
	gets(str1);
	strcpy(str2,str1);
	//str2 is destination
	//str1 is source
	printf("\n\n copy String : %s ",str2);
}
