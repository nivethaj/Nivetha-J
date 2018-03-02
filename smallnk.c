#include <stdio.h>
void main() 
{
	int n,k,i,s[10],t;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(s[i]>s[i+1])
		{
			t=s[i];
			s[i]=s[i+1];
			s[i+1]=t;
		}
	}
	printf("%d",s[k-1]);
	return 0;
}
