#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("enter array elements: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]%2==0)
			printf("\n%d is even at a[%d][%d] and memory address %u\n",a[i][j],i,j,&a[i][j]);
			
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",a[j][i]);
	}
	printf("\n"); 
	
	}
	
}


