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
        if(s[i]%2!=0)
    {
        printf("\n Yes");
        count++;
    }
    }
   if(count==k)
    {
        printf("\n %d",s[i]);
    }
    return 0;
}
    
