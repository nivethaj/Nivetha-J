#include<stdio.h>
void main()
{
	int s,k,p=1,i;
	printf("\n Enter a number:");
	scanf("%d %d",&s,&k);
	for(i=0;i<k;i++)
	{
	    p=p*s;
	}
	printf("%d",p);
	return 0;	
}
