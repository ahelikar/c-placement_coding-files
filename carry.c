#include<stdio.h>
int main()
{
	int n1,n2,n_1,n_2,z,sum=0,count=0;
	printf("Enter the first number ");
	scanf("%d",&n1);
	printf("Enter the second number");
	scanf("%d",&n2);
	printf("Number being carried");
	while(n1!=0 && n2!=0)
	{
		
	
	
	n_1=n1%10;
	n_2=n2%10;
	
	sum=n_1+n_2;
	
	
	if(sum>=9)
	{
		z=sum/10;
	    count++;
	   
	printf(" %d",z);
	
	}

	else{
		z=0;
	}
	
	
	n1=(n1/10);
	n2=(n2/10);
}
printf("Number of carry %d",count);
		
	
	
	
	return 0;
}
	
