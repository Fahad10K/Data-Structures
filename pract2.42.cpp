#include<stdio.h>

int main()
{
	int n,m;
	printf ("Enter the day you want : \t");
	scanf("%d",&n);
	printf("\nEnter the Month Number : \t");
	scanf("%d",&m);
	
	(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	                        ?
                         	((31-n)%7==0)?printf("\nThe day is Friday"):
		                    ((31-n)%7==1)?printf("\nThe day is Thursday"):
			                ((31-n)%7==2)?printf("\nThe day is Wednesday"):
			               	((31-n)%7==3)?printf("\nThe day is Tuesday"):
					        ((31-n)%7==4)?printf("\nThe day is Monday"):
					       	((31-n)%7==5)?printf("\nThe day is Sunday"):
							((31-n)%7==6)?printf("\nThe day is Satuday"):printf("\nThe day entered is wrong"):
						
	(m==4||m==6||m==9||m==11)
	                        ?
                         	((30-n)%7==0)?printf("\nThe day is Friday"):
		                    ((30-n)%7==1)?printf("\nThe day is Thursday"):
			                ((30-n)%7==2)?printf("\nThe day is Wednesday"):
			               	((30-n)%7==3)?printf("\nThe day is Tuesday"):
					        ((30-n)%7==4)?printf("\nThe day is Monday"):
					       	((30-n)%7==5)?printf("\nThe day is Sunday"):
							((30-n)%7==6)?printf("\nThe day is Satuday"):printf("\nThe day entered is wrong"):	
	
		(m==2)
	                        ?
                         	((28-n)%7==0)?printf("\nThe day is Friday"):
		                    ((28-n)%7==1)?printf("\nThe day is Thursday"):
			                ((28-n)%7==2)?printf("\nThe day is Wednesday"):
			               	((28-n)%7==3)?printf("\nThe day is Tuesday"):
					        ((28-n)%7==4)?printf("\nThe day is Monday"):
					       	((28-n)%7==5)?printf("\nThe day is Sunday"):
							((28-n)%7==6)?printf("\nThe day is Satuday"):printf("\nThe day entered is wrong"):printf("\nWrong month entered")
	return 0;
}
