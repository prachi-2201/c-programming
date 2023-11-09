#include<stdio.h>
struct student{
	int roll;
	char name[20];
	float marks;
};
main()
{
	struct student s1;
	s1.roll=10;
	strcpy(s1.name,"Prachi");
	s1.marks=87.90;
	printf("\n Roll no. :\t %d",s1.roll);
	printf("\n Name : \t %s",s1.name);
	printf("\n Marks : \t %.2f",s1.marks);
}
