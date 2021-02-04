#include<stdio.h>
void main()
{
    char s[100];
    scanf("%[^\n]%*c",s);
    printf("%s",s);
}
