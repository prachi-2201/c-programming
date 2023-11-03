//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
main()
{
 int m, n, i, j,op;  
   printf("Enter the number of rows and columns of the matrices: ");  
   scanf("%d%d", &m, &n);  
   int a[m][n], b[m][n], c[m][n];  
   printf("Enter the elements of matrix A: \n");  
   for (i = 0; i < m; i++) {  
      for (j = 0; j < n; j++) {  
         scanf("%d", &a[i][j]);  
      }  
   }  
    printf("Enter the elements of matrix B: \n");  
   for (i = 0; i < m; i++) {  
      for (j = 0; j < n; j++) {  
         scanf("%d", &b[i][j]);  
      }  
   }  
	do{
		printf("-----------------********---------------------");
		printf("\n\t Enter your choice \n\t 1.Addition \n\t 2.Substraction \n\t 3.Multiplication \n\t 4.Division \n\t 5.Exit \n");
		printf("-----------------********---------------------\n\t");
		scanf(" %d",&op);
	
		switch(op)
		{
			
			case 1:for (i = 0; i < m; i++) 
						{  
					      for (j = 0; j < n; j++) 
						  {  
					         c[i][j] = a[i][j] + b[i][j];  
					      }  
   						}   
						printf("The sum of the two matrices is: \n");  
				   for (i = 0; i < m; i++) 
				   {  
				      for (j = 0; j < n; j++) 
					  {  
				         printf("%d ", c[i][j]);  
				      }  
				      printf("\n");  
				   }  
					break;
			case 2:
					break;
			case 3:for(i=0;i<r;i++)    
				{    
					for(j=0;j<c;j++)    
					{    
						mul[i][j]=0;    
						for(k=0;k<c;k++)    
						{    
							mul[i][j]+=a[i][k]*b[k][j];    
						}    
					}    
				}  
				for(i=0;i<r;i++)    
				{    
					for(j=0;j<c;j++)    
					{    
						printf("%d\t",mul[i][j]);    
					}    
					printf("\n");    
				}    
					break;
			case 4:
					break;
			case 5:break;
			default:printf("\n\t INVALID CHOICE \n");
					break;
			
		}
	}while(op!=5);
}
