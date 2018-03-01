#include<stdio.h>
#include<string.h>
int main()
{
	int n,l,p,k;
	char s[100];
    scanf("%s",s);
	scanf("%d",&n);
	l=strlen(s);
	p=l-n;
	for(k=p;k<l;k++)
	{
		printf("%c",s[i]);
	}
	return(0);	
}
