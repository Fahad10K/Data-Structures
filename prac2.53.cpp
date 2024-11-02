#include <stdio.h>

int main()
{
   int n,p,q,r;
   int m,tg,tb,ga;
    
    printf("enter the number of students --:>\n");
    scanf("%d",&n);
    printf("\nenter the ration of girls is to boys as girls:boys respectively -->\n");
    scanf("%d\t%d",&p,&q);
    printf("\nThe ratio is %d : %d ",p,q);
    printf("\nenter the rank of Savita->\n");
    scanf("%d",&r);
    printf("\nenter the number of boys ahead of savita-->\n");
    scanf("%d",&m);
    
    tg=p*n/p+q;
    tb=q*n/p+q*(n);
    ga=tg-r+m;
    printf("\n\nTotal Girls in class--> %d",tg);
    printf("\nTotal Boys in the class--> %d",tb);
    printf("\nGirls below of savita --> %d",ga);
    (r<=10)?printf("\n Savita isi in top 10...."):printf("\n Savita is not in top 10....");
	
	return 0;
}
