#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter total number of students in the train\n");
    scanf("%d",&n);
    printf("Enter no. of students who pulled the chain\n");
    scanf("%d",&m);
    float p; 
	p = ((float)m/n)*100;
    if (m>n)
       {
	   printf("number of students who pulled can not be greater than students present in the train\n");
       }
	else
       {
       if(p >= 80)
       printf("Strict Actions are Required to restrict this event\n");
       else if(p>=50 && p<=80)
       printf("Guidlines should be issued\n");
       else if(p>=10 && p<50)
       printf("Request to Restrict the action\n");
       else if(p<10)
       printf("No action is Required\n");
       }
       printf("\nby FAHAD KHAN 20BCS6387");


	return 0;
}
