#include<stdio.h>
struct student{
	int roll;
	char name[20];
	float marks;
};
main()
{
	int i;
	struct student s1[3];
	for(i=1;i<=3;i++)
	{
		printf("\n ENTER ROLL NUMBER : ");
		scanf("%d",&s1[i].roll);
		
		printf("\n ENTER NAME : ");
		scanf("%s",&s1[i].name);
		
		printf("\n ENTER MARKS : ");
		scanf("%f",&s1[i].marks);
	}
	
	for(i=1;i<=3;i++)
	{
		printf("\n \t-----------STUDENT %d-------------",i);
		printf("\n\t Roll no. :\t %d",s1[i].roll);
		printf("\n\t Name : \t %s",s1[i].name);
		printf("\n\t Marks : \t %.2f",s1[i].marks);
	}

}
