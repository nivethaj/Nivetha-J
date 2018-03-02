#include<stdio.h>
void main()
{
    int n,k,i,s[10],count;
    printf("\n enter a number:");
    scanf("%d%d" ,&k,&n);
    for(i=0;i<n;i++)
    scanf("%d",&s[i]);
    for(i=0;i<n;i++)
    {
        if(s[i]==k)
    {
        printf("\n Yes");
        count=1;
    }
    }
   if(count!=1)
    {
        printf("\n no");
        count=0;
    }
    return 0;
}
    
