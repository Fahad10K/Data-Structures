#include<stdio.h>
/*#include<string.h>
#include<stdlib.h>
*/
int main()
{
	int n,i,j;
	
	printf("enter n-->\n");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
	
	for(i=1;i<=10;i++)
	{
		printf("%d x %d =  %d\n",i,j,j*i);
	}
	printf("\n");
    }
	return 0;
	}


