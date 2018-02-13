#include <stdio.h>
#include<string.h>
void main()
{
	char a[50];
	int i,j,n,count;
    printf("\n Enter the word:");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<1;i++)
    for(j=i+1;j<1;j++)
    if(a[i]==a[j])
    {
        count=1;break;
    }
    if(count==0)
    {
        printf("\n It is isogram");
    }
    else
    {
        printf("\n It is not isogram");
    }
   return 0;
}

 

