#include<stdio.h>
void main()
{
    int i,a,c;
    printf("\n Enter a number:");
    scanf("%d",&a);
    for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
        c=c+1;
    }
    if(c==2)
    {
    printf("\n The number is not composite");
    }
    else
    {
    printf("\n The number is  composite");
    }
    return 0;
}
