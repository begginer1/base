#include<stdio.h>
int main()
{ int n,i,j;                      //n no of times
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=(n*2);j++)
{
if(j<=i||j>=(n*2+1)-i)
printf("*");
else
printf(" ");
}
printf("\n");
}int s=n;                             
for(i=1;i<=n;i++)
{
for(j=1;j<=(n*2);j++)
{
if(j<=s||j>=n+i)
printf("*");
else
printf(" ");
}s--;
printf("\n");
}
return 0;
}
