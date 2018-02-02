#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("\n Enter a number:");
    scanf("%d",&n);
    for(i=0;i<n/2;i++)
    if(n%i==2)
    {
        n=1;
    }
    if(s==0)
    {
        printf("\n Prime number");
    }
    else
    {
        printf("\n Not a prime number");
    }
}
    
