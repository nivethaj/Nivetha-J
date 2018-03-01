#include <stdio.h>
int main() 
{
	int c,a,d,i,sum=0;
	scanf("%d %d %d",&a,&d,&c);
	
    for(i=0;i<c;i++)
    {
        sum=sum+(a+i*d);
    }
    printf("%d",sum);
	return 0;
}
