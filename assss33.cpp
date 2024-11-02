#include<stdio.h>

int main()
{
	char c,str[100];
	printf("char-->");
	scanf("%c",&c);
	printf("\nstring-->");
	scanf("\n%[^\n]*s",&str);
	printf("%c\n%s",c,str);  
}
