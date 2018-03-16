#include <stdio.h>
int main()
{
	int a[100],ch,n,i,j,max,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j]='+';
            }
        }
        if(count<=max)
        {
            max=count;
            ch=a[i];
        }
    }
    printf("%d",ch);
	return 0;
}

