#include<stdio.h>

int main()
{

int a[10],i,pos1,pos2,small=9999,sum=0,max=-9999,temp;
int count=0,temp2,flag=0,flag2=0,poss,temp3;
printf("enter 10 value-->\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}

for(int j=0;j<10;j++)
{	
	sum+=a[j];

if(a[j]>max)
{
	max=a[j];
	pos1=j;
}

if(a[j]<small)
{
	small=a[j];
	pos2=j;
}

}
/*
printf("\nmax value--> %d\nmin value--> %d",max,small);
printf("\n\nsum-->%d\n\nindex value of max -->%d\nindex value of min--> %d",sum,pos1,pos2);
printf("\n\nAverage value 5 numbers entered--> %.2f",(float)sum/10);
printf("\n\nBefore swapping max is '%d' and min is '%d'....",max,small);
temp=max;
max=small;
small=temp;
printf("After swapping max is '%d' and min is '%d'",max,small);
*/
for(int k=0;k<10;k++)
{
	for(int h=k+1;h<10;h++)
	{
		if(a[k]==a[h])
		{
			flag=1;
			++count;
			poss=k;
			printf("\n\n%d has duplicate at position %d and %d\n",a[k],k,h);
			temp2=a[k];
			
		}
	}
}
if(flag==0)
{
	printf("\n\n\nNo, Repition in number exists....");
}

}


