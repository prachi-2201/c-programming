#include<stdio.h>
main(){
	int a,b,res,op;
	printf("\n\n\t Enter a number : ");
	scanf("%d",&a);
	printf("\n\n\t Enter a number : ");
	scanf("%d",&b);
	printf("\n\n\t ................Operations...............");
	printf("\n\n\t 1. Addition");
	printf("\n\n\t 2. Substraction");
	printf("\n\n\t 3. Multiplication");
	printf("\n\n\t 4. Division");
	printf("\n\n\t .........................................");
	printf("\n\n\t Enter a number of operation : ");
	scanf("%d",&op);
	switch (op) {
		case 1:
			res=a+b;
			printf("\n\n\t %d",res);
			break;
		case 2:
			res=a-b;
			printf("\n\n\t %d",res);
			break;
		case 3:
			res=a*b;
			printf("\n\n\t %d",res);
			break;
		case 4:
			res=a/b;
			printf("\n\n\t %d",res);
			break;
		default:
			printf("invalid choice");
			break;
	}
}
