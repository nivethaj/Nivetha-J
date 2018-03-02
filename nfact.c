#include <stdio.h>
void main() 
{
    int n,fact,i;
	printf("\n Enter a number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    fact=i*n;
	printf("%d",fact);
	return 0;
}
