//program to find area of circle, rectangle and triangle
#include <stdio.h>
main(){
	float r,len,brth,base,height,circle,rec,tri;
	printf("\n\n Enter radius of circle to find area of circle:");
	scanf("%f",&r);
	printf("\n\n Enter length and breath of reactangle to find area of reactangle");
	printf("\n length :");
	scanf("%f",&len);
	printf("\n breath :");
	scanf("%f",&brth);
	printf("\n\n Enter base and height of triangle to find area of triangle");
	printf("\n base :");
	scanf("%f",&base);
	printf("\n height :");
	scanf("%f",&height);
	circle=3.14*(r*r);
	rec=len*brth;
	tri=(base*height)/2;
	printf("\n Area of circle : %.2f \n Area of rectangle : %.2f \n Area of triangle : %.2f",circle,rec,tri);
}
