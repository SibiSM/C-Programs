#include<stdio.h>
#include<string.h>
void main()
{
    char buffer[100],s1[100]="hello",s2[100]="world";
    sprintf(buffer,"%s%s",s1,s2);
    printf("Concatenation :%s\n",buffer);
    sprintf(buffer,"%s",s1);
    printf("Copying into buffer:%s\n",buffer);
    printf("Length :%d",sprintf(buffer,"%s",s2));
}
