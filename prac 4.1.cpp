#include <stdio.h>

int main()
{
int n,i,p,l,tot;
float m,x,sum,sum2;
float mean1,mean2;
printf("enter the number of things sold-->\n");
scanf("%d",&n);
int a[n];
printf("\nenter the cost of each things sold respectivley-->\n");
for(i=0;i<n;i++)
{
    printf("\n %d.",i+1);
    scanf("%d",&a[i]);
}
printf("\nenter the number of things sold on profit-->");
scanf("%d",&p);
l=n-p;
for(i=0;i<p;i++)
{
    sum+=a[i];
}
for(i=l;i<n;i++)
{
    sum2+=a[i];
}

for(i=0;i<p;i++)
{
    m=(a[i]/sum)*100;
    mean1+=m;
}
printf("\ntotal profit = %.2f ",mean1/p);
for(i=l;i<n;i++)
{
    x=(a[i]/sum2)*100;
    mean2+=x;
}
printf("\ntotal loss= %.2f ",mean2/l);
tot=(mean1/p)-(mean2/l);
if(tot>0)
{
	printf("\npnet profit --> %d", tot);
}
else
{
	printf("\nnet loss --> %d",tot);
}

    return 0;
}

