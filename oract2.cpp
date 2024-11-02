#include<stdio.h>

int main()
{
	int x,y,z;
	float s1,s2,s3,xp,yp,zp,t1,t2,t3;
	
	printf("\nloan amount R\n");
	scanf("%d",&x);
	printf("\nloan amount M\n");
	scanf("%d",&y);
	printf("\nloan amount S\n");
	scanf("%d",&z);
	
	printf("\nloan amount R\n");
	scanf("%f",&xp);
	printf("\nloan amount M\n");
	scanf("%f",&yp);
	printf("\nloan amount S\n");
	scanf("%f",&zp);
	
	printf("\nloan amount R\n");
	scanf("%f",&t1);
	printf("\nloan amount M\n");
	scanf("%f",&t2);
	printf("\nloan amount S\n");
	scanf("%f",&t3);
    s1=x*xp*t1/100;
    s2=y*yp*t3/100;
    s3=z*zp*t3/100;
    
    (s1>s2 && s1>s3)?printf("\nR IS MAX"):(s2>s1 && s2>s3)?printf("\nM is max"):(s3>s1 && s3>s2)?printf("\ns is max"):printf("");
    
    return 0;
}
