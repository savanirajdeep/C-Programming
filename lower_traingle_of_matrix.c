#include<stdio.h>
int main()
{
	int i,j,m,n,a[5][5];
	printf("Enter the value of m: ");
	scanf("%d",&m);
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter the elements : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d\t",a[i][j]);	
		}
		printf("\n");
	}
	return 0;
}