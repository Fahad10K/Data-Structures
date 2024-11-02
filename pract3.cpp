#include<stdio.h>

int main()
{
	int m,y,r,n,dob,grade;
	printf("Enter the age diff. of Mr Kavi and his mother 'm', age diff of Kavi's brother and their mother 'n', DOB of Kavi's Brother 'y'(1900<=y<=2019) and The garde in which Kavi's brother studies 'r'.\n\n");
    printf("\nm-->\t");scanf("%d",&m);  
    printf("\nn-->\t");scanf("%d",&n);
    printf("\ny-->\t");scanf("%d",&y);
    printf("\nr-->\t");scanf("%d",&r);
      
      dob=y+(m-n);
      grade=r+(n-m);

	(grade<1)?printf("\nKavi is in pre-primary..."):(grade>12)?printf("\nKavi is in college and the class can not be determined...."):printf("\nKavi is in %d....",grade);
return 0;	
}
