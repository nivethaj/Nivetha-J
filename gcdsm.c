#include<stdio.h>
int main()
{
	int i,a,b,gcd;
	printf("Enter the two number");
	scanf("%d %d",&a,&b);
	for(i=2;i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		gcd=i;
}
printf("%d",gcd);
}
