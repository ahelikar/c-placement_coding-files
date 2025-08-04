#include<stdio.h>
int main()
{
	int i,j,m,n,sum=0;
	printf("Enter the numbver of rows\n");
	scanf("%d",&m);
	printf("Enter the number of coloumns\n");
	scanf("%d",&n);
	printf("Enter the number of elements\n");
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		
	
			if (i==j)
			{
				sum+=a[i][j];
			)
		}
	}
	printf("%d",sum);
			return 0;

	
}   
