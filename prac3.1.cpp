#include<stdio.h>

int main ()
{
    int t, p, q, b, bp, g, gp, diff;
    printf("Enter the total number of students in class---> \n");
    scanf("%d", &t);
    printf("Enter the ratio of boys is to girls in the class---> \n");
    scanf("%d %d", &p,&q);
    b = t * p / (p+q);
    g = t - b;
    bp = (b *100/t);
    gp = (g *100/t);
    diff = b - g;
    printf("\nNumber of boys in the class--> %d\n\nNumber of girls in the class--> %d\n",b,g);
    printf("\nPercentage of boys in the class--> %d\n\nPercentage of girls in the class--> %d\n",bp,gp);
    printf("\n\nDifference between girls and boys in the class is %d\n",diff);
    if (diff >= -5 && diff <=5)
    {
	printf("Equal Oppotunities of education are there for both boys and girls\n");
    }
	else if (bp >= 70)
    {
	printf("There is gender partiality in education as boys percentage is %d\n",bp);
    }
	else if(gp >= 70)
    {
	printf("Girls are dominating in education as girls percentage is %d\n",gp);
    }
	else
    {
    printf("There is no conclusion drawn from the given stats\n");
    }
	
	return 0;
}
 

