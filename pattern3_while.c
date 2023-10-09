#include<stdio.h>
main(){
	int i,j;
	i=1;
	char c='A';
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%c",c);
			c++;
			j=j+1;
		}
		printf("\n");
		i=i+1;
	}
}
