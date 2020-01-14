#include<stdio.h>
int main()
{
	int i,j,a[5][5],b[5][5],c[5][5],m1,m2,n1,n2;
	printf("Enter the value of m1: ");
	scanf("%d",&m1);
	printf("Enter the value of n1: ");
	scanf("%d",&n1);
	printf("Enter the value of m2: ");
	scanf("%d",&m2);
	printf("Enter the value of n2: ");
	scanf("%d",&n2);
	
	if(m1!=m2 && n1!=n2)
		printf("Invalid for sum of the matrix");
	else
	{
		printf("Enter the elements of the first matrix : \n");		
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				
				scanf("%d",&a[i][j]);
			}

		}
		printf("Enter the elements of the second matrix : \n");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				
				scanf("%d",&b[i][j]);
			}

		}
		for(i=0;i<=m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}

		}
		printf("Sum of the two matrix : \n");
		for(i=0;i<=m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");

		}
	}
	return 0;
}