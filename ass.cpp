#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,sum=0;
    char ch[100];
    
    scanf("%d\n",&n);
    
    for(i=0;i<n;i++)
    {
    	 scanf("%d",&ch[i]);     
    }
    for(i=0;i<n;i++)
    {
    	sum+=ch[i];
	}
    printf("\n%d",sum);
    return 0;
}
