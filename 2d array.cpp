#include<stdio.h>

int mian()
{
	int a[2][3];
	int i,j,sume=0,sumo=0;
	printf("enter array elements-->\n");
	
	for (i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
    printf("array elements-->\n");
    for(i=0;i<2;i++)
    {
    	for(j=0;j<5;j++)
    	{
    		printf(" a[%d][%d] = %d",i,j,a[i][j]);
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
    printf("\nsum of all even = %d",sume);
	printf("\nsum of all od = %d",sumo);
	
return 0;	
}
