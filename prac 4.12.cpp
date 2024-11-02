#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,p,i;
    float item[n],m,x,profit=0,loss=0,total;
    printf("Enter the total number of items for sale: ");
    scanf("%d",&n);
    printf("Enter the price of each item :");
    for (i=0;i<n;i++)
    {
        scanf("%f",&item[i]);
    }
    printf("Enter the number of items sold in the profit");
    scanf("%d",&p);
    printf("\nEnter the profit percentage");
    scanf("%f",&m);
    printf("\nEnter the loss percentage");
    scanf("%f",&x);
    for(i=0;i<p;i++)
    {
        profit+= (m*item[i])/100;
    }
    for (i=0;i<n-p;i++)
    {
        loss+=(x*item[i])/100;
    }
    total=profit-loss;
    if(total>0)
    {
        printf("The salesman gets %.2f rs profit : ",total);
        
    }
    else if (total==0)
    {
        printf("The salesman neither got profit nor loss");
    }
    else 
    {
        printf("The salesman gets %.2f rs loss : ",total);
    }

    return 0;
}

