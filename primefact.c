#include<stdio.h>
void main()
{
    int i,j,n,prime;
    printf("\n Enter a number:");
    scanf("%d",&n);
    printf("\n Prime fator : %d",n);
    for(i=0;i<=n;i++)
    {
        if(n%i==0)
    {
        prime=1;
    }
    }
    for(j=2;j<i/2;j++)
    {
        if(i%j==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==1)
    {
        printf("%d",i);
    }
    return 0;
}
