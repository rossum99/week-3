#include <stdio.h>
int main()
{
int a[6]={8,7,3,1,4,5};
int i,j,t;
for(i=0;i<5;i+=2)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;}
for(i=0;i<=5;i++)
printf("%d ",a[i]);
return 0;}
