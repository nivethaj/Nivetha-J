#include<stdio.h>
void main()
{
    char s[20];
    int i,length;
    printf("\n Enter a number:");
    gets(s);
    length=strlen(s);
    for(i=0;i<=length;i++)
    if(s{i]!=s(length-i-1))
    {
        printf("\n string is palindrome")
    }
    else
    {
        printf("\n String is not palindrome")
    }
}
