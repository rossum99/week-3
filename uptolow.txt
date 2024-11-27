#include <stdio.h>
int main()
{int l1,l2,i,j=0;
char ch1[20];
printf("enter string here");
	gets(ch1);
	for(i=0;i<20;i++)
	{
	ch1[i]+=32;}
	for(i=0;i<20;i++)
	printf("%c",ch1[i]);
	return 0;}
