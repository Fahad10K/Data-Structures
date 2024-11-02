#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter two a and b respectively-->\n");
	scanf("\n %d \t %d",&a,&b);
	
	printf("\nBitwise operator AND-->\t %d", a&b);
	printf("\nBitwise operator OR-->\t %d", a|b);
	printf("\nBitwise operator XOR-->\t %d", a^b);

return 0;
}
