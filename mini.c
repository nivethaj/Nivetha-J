#include <stdio.h>
void main()
{
    int s[10],min=0,i,n;
    min=s[0];
    for(i=0;i<10;i++)
    {
    scanf("%d",&s[i]);
    }
    for(i=1;i<10;i++)
    {
    if(s[i]<min)
    min=s[i];
    }
    printf("%d",min);
    return 0;
}
