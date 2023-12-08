#include<stdio.h>
int check(int n);
main()
{
	int d;
	d=check(11);
	printf("%d",d);
}
int check(int n)
{
	if(n%2==0)
	{
		return n ;
	}
}
