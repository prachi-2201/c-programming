#include<stdio.h>
struct student
{
	int roll;
	char name[10];
};
main()
{
	struct student s1;
	s1.roll=11;
	strcpy(s1.name,"sss");
	printf("\n\n...... info of student 1......");
	printf("\n\n Roll No. : %d",s1.roll);
	printf("\n\n Name : %s",s1.name);	
}
