#include<stdio.h>
main(){
	char name[10];
	printf("Enter your name :");
	
	gets(name);//to input string with space
	//scanf("%s",&name); input string without space
	
	puts(name); //to print string with space
	//printf("name : %s",name); print string without space
}
