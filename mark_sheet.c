#include<stdio.h>
main()
{
	int roll_no,total,s1,s2,s3,s4,s5;
	float per;
	
	printf("\n\n\t Enter roll number : ");
	scanf("%d",&roll_no);
	printf("\n\n\t Enter Marks of subject 1 : ");
	scanf("%d",&s1);
	printf("\n\n\t Enter Marks of subject 2 : ");
	scanf("%d",&s2);
	printf("\n\n\t Enter Marks of subject 3 : ");
	scanf("%d",&s3);
	printf("\n\n\t Enter Marks of subject 4 : ");
	scanf("%d",&s4);
	printf("\n\n\t Enter Marks of subject 5 : ");
	scanf("%d",&s5);
	
	total=s1+s2+s3+s4+s5;
	per=total/5;
	
	printf("\n\n\t Roll Number = %d",roll_no);
	printf("\n\n\t Percentage = %.2f %%",per);
	
	if(s1>=40 && s2>40 && s3>40 && s4>40 && s5>40)
	{
		if(per>=80)
		{
			printf("\n\n\t Grade = A+ ");
		}
		else if(per>=70)
		{
			printf("\n\n\t Grade = A ");
		}
		else if(per>=60)
		{
			printf("\n\n\t Grade = B+ ");
		}
		else if(per>=50)
		{
			printf("\n\n\t Grade = B ");
		}
		else if(per>=40)
		{
			printf("\n\n\t Grade = c ");
		}
	}
	else
	{
		printf("\n\n\t Grade = Fail");
	}
}
