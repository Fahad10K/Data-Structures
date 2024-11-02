#include<stdio.h>

int main()
{
	
    int n,i,c=0,k=1;
    scanf("%d", &n);
    for(i=1;i<=5;i++)
    {
        c +=(n/k)%10;
        k*=10;
    }
    printf("%d",c);
    
    return 0;
}
