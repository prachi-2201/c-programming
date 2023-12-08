//simple function
#include<stdio.h>
int sum();
main(){
	int z;
	z=sum();
	printf("%d",z);	
}
int sum()
{
	int a=10,b=20,r;
	r=a+b;
	return r;
}
