#include<stdio.h>

int main()
{
	int t[3][3],a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j,sume=0,sumo=0;
	printf("enter array elements-->\n");
	/*
	for (i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
    } */
    printf("array elements-->\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf(" a[%d][%d] = %d \n",i,j,a[i][j]);
    		if(a[i][j]%2==0)
    		{
    			sume+=a[i][j];
			}
			else
			{
				sumo+=a[i][j];
			}
		}
	}
//index and address of even and odd
	 for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    	
    		if(a[i][j]%2==0)
    		{
    		printf (" even at a[%d][%d] = %d and address %d\n",i,j,a[i][j]),&a[i][j];
			}
		}
	}
	
	//transpose
	printf("\n transpose of matrix-->\n");
	 for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    	t[j][i]=a[i][j];
    	
			}
}
for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    	printf("a[%d][%d] = %d \n",i,j,t[i][j]);
    	
			}
}
printf("\n matrix before transpose --> \n");

			printf("\n----------------------\n");
for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    	printf("| %d  |  ",a[i][j]);
    	
			}
			printf("\n----------------------\n");
}
printf("\n matrix after transpose --> \n");

			printf("\n----------------------\n");
for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    	printf("| %d  |  ",t[i][j]);
    	
			}
			printf("\n----------------------\n");
}

    printf("\nsum of all even = %d",sume);
	printf("\nsum of all od = %d",sumo);
	
return 0;	
}
