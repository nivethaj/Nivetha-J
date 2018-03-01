#include<stdio.h>
int main()
{
	int n,i,res=0;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	res=res+i;
	printf("%d",res);
	return 0;
}
