#include <stdio.h>
void main(void) 
{
	char s[1000];
	int i,j;
	printf("\n Enter a string:");
	scanf("%s",&s);
	j=strlen(s);
	for(i=0;i<j;i++)
	{
		s[i]=s[i]+3;
		
	}
	printf("%s",s);
	
}
