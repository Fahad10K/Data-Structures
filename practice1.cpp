#include<stdio.h>

main()
{
	int a,b,i,c=0,n=1;
	printf("enter five digit numbers-->");
	scanf("%d",&a);
    for(i=1;i<=5;i++)
    {
    	c+=(a/n)%10;
		
    	n*=10;
    	
    	
	}
	printf("%d",c);
}
