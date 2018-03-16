#include<stdio.h>
void main()
{
    char s[50],a[50],b[50];
    int i,j,l;
    printf("\n Enter a String:");
    scanf("%s",s);
    l=strlen(a);
    for(i=l-1;i>=0;i--)
    {
        a[i]=s[j];
        j++;
    }
    printf("\n %s",a);
    j=0;
    for(i=0;i<1;i++)    
    {
        if(a[i]=='a',a[i]=='e',a[i]=='i',a[i]=='o',a[i]=='u')
        a[i]=a[i];
        else
        {
            b[j]=a[i];
            j++;
        }
        printf("\n %s",b);
    }
    return 0;
}
