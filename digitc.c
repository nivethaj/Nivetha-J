#include<stdio.h>
void main()
{
    int n,i=0;
    printf("\n enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        i++;
        n/=10;
    }
    printf("\n the value is:%d",i);
}
