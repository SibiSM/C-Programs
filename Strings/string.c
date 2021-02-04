#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool check(char s[],int k,char sub[])
{
    for(int i=0;sub[i]!='\0';)
    {
        if(sub[i]!=s[k])
            {return false;}
        i++;
        k++;
    }
    return true;

}
bool checksub(char s[],char sub[])
{
    bool k=false;
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]==sub[0])
        {
            if(check(s,i,sub))
                {
                k=true;
                }
        }
        i++;
    }
    return k;
}
bool checksubstring(char s1[],char sub[])
{
    bool k=false;
    int len=strlen(sub);
    for(int i=0;s1[i];i++)
    {
        if(s1[i]==sub[0] && (i==0 || i==strlen(s1)-len))
           {
            if(check(s1,i,sub))
               {
                k=true;
               }
           }
    }
    return k;
}
void main()
{
    char ma[100],ma1[100],sub[100],sub1[100];
     printf("\n\nEnter a main string and substring");
    scanf("%[^\n]%*c %[^\n]%*c",ma,sub);
    bool p;
    p=checksub(ma,sub);
    if(p)
        printf("Substring is present");
    else
        printf("Substring not present");
    printf("\nEnter a string to find and last word of a substring");
    scanf("%[^\n]%*c %[^\n]%*c",ma1,sub1);
    bool p1;
    p1=checksubstring(ma1,sub1);
    if(p1)
        printf("\nSubstring  for sentence is present");
    else
        printf("\nSubstring not present in sentence");

}
