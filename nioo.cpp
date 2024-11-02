#include<stdio.h>

int main()
{
	int a;
	printf("enetr numb from 1-4\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\ncase1");
			break;
		case 2:
			printf("\ncase2");
			break;
		case 3:
			printf("\ncase3");
			break;
		case 4:
			printf("\ncase4");
			break;
		default:
			printf("\ninvalid num");
	}


}
