//ptr hold the address of myage memory address
#include<stdio.h>
main()
{
	int myage=20;
	int* ptr=&myage;
	printf("%d\n",myage);
	printf("%p\n",&myage);
	printf("%p\n",ptr);
	printf("%d\n",ptr);
}
