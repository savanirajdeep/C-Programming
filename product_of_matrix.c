#include<stdio.h>
int main()
{
	int i,j,k,sum,a[10][10],b[10][10],c[10][10],m1,m2,n1,n2;
	printf("Enter the value of m1 : ");
	scanf("%d",&m1);
	printf("Enter the value of n1 : ");
	scanf("%d",&n1);
	printf("Enter the value of m2 : ");
	scanf("%d",&m2);
	printf("Enter the value of n2 : ");
	scanf("%d",&n2);
	if(n1!=m2)
	{
		printf("Product of the is not possible");
	}
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
		for(i=0;i<m2;i++)
		{
			for(j=0;j<n2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{
				for(k=0;k<m2;k++)
				{
					sum=sum+a[i][k]*b[k][j];
					c[i][j]=sum;
				}
				sum=0;
			}
		}
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}

	}
    return 0;

}