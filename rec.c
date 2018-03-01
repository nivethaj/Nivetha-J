#include<stdio.h>
void main()
{
	int s;
	scanf("%d",&s);
	while(s%2==0)
	{
	    s=s/2;
	}
	printf("%d",s);
	return 0;	
}
