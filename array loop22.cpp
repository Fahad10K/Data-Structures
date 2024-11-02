#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,i,k;
scanf("%d",&a);
int n[a];
for(i=0;i<a;i++)
{
    scanf("%d",&n[i]);
}

for(k=a-1;k>=0;k--)
{
    printf("%d ",n[k]);
}
  
}
