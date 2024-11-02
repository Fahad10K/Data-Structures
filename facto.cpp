#include<stdio.h>

int fact(int a)
{
	int r;
	for(int i=1;i<=a;i++)
	{
		r=r*i;
	}
	return r;
	
}
int main()
{
	int a=6;
	printf("facto of 6 = %d",fact(a));
	
}
