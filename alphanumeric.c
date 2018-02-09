#include <stdio.h>
int main()
{
    char s[100];
    int a,i;
    printf("Alphanumeric string is:");
    scanf("%s",s);
    a=strlen(s);
    for(i=0;i<a;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        printf("%c",s[i]);
    }
    return 0;
}
