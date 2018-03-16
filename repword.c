#include <stdio.h>
#include<string.h> 
int main() 
{
	char s[100],c;
	int i,j,count=1,m=1,l;
    gets(s);
    l=strlen(s);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		if(s[i]==s[j])
		{
			count++;
			if(count>m)
			{
				m=count;
				c=s[i];
			}
		}
 
	}
	printf("\n%c",c);
	return 0;
}
