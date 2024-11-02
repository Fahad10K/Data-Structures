#include<stdio.h>


int main()
{
	int t,p,q,r,x,y,z;
	float l1,l2,l3,n1,n2,n3,t1,t2,t3;
	
	printf("The total money They had before swpending it in the market-->");
	scanf("%d",&t);
	printf("\n Enter The Ratio in which Amba, Aambika and Ambalika have money respectively--->\n");
	scanf("%d\n%d\n%d",&x,&y,&z);
	printf("Eneter the ratio in which they spent their their money respectively--->\n");
	scanf("%d\n%d\n%d",&p,&q,&r);
	n1=t*x/(x+y+z);
	n2=t*y/(x+y+z);
	n3=t*z/(x+y+z);
	l1=n1*p/(p+q+r);
	l2=n2*q/(p+q+r);
	l3=n3*r/(p+q+r);
	t1=n1-l1;
	t2=n2-l2;
	t3=n3-l3;
	//printf("\n\nMoney Amba had--> %.2f\nMoney Ambika had--> %.2f1\nMoney Ambalika had--> %.2f\n",n1,n2,n3);
	//printf("\nMoney Amba spent--> %.2f\nMoney Ambika spent--> %.2f\nMoney Ambalika spent--> %.2f\n",l1,l2,l3);
	printf("\nMoney Amba has left-->%.2f\nMoney Ambika has left-->%.2f\nMoney Ambalika has left-->%.2f\n",t1,t2,t3);
	if(t1>t2 && t1>t3)
	{
		printf("\nAmba has max money left");
		
	}
	if(t2>t1 && t2>t3)
	{
		printf("\nAmbika has max money left");
		
	}if(t3>t1 && t3>t2)
	{
		printf("\nAmbalika has max money left");
		
	}

printf("\n\nby fahad khan 20BCS6387");
return 0;
}
