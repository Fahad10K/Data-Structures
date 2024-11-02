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
    printf("\nenter the number of biys ahead of savita-->\n");
    printf("%d",&m);
    
    tg=p/p+q*(n);
    tb=q/p+q*(n);
    ga=tg-r+m;
    printf("\n\nTotal Girls in class--> %d",tg);
    printf("\nTotal Boys in the class--> %d",tb);
    printf("\nGirls ahead of savita --> %d",ga);
    return 0;
}
