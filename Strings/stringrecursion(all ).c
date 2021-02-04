#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int len(char *s)
{
    int k;
    if(*s)
    {
    return 1+len(s+1);
    }

}
int compari(char *s1,char *s2)
{
    if(*s1 || *s2)
    {
        if(*s1>*s2)
            return 1;
        else if(*s1<*s2)
            return -1;
        *s1++;
        *s2++;
        return compari(s1,s2);
    }
    return 0;
}
char *stringrev(char *s)
{
    static int i=0;
    static char s1[100];
    if(*s)
       {
        stringrev(s+1);
        s1[i++]=*s;
       }
    return s1;

}
int occur(char a,char *s)
{
    static int i=0;
    if(*s)
    {
        if(a==*s)
            i++;
        occur(a,s+1);
    }
    return i;
}
int occurence(char a,char *s,int c)
{
    static int i=0;
    if(*s)
    {
        if(a==*s)
            c=i;
        i++;
        c=occurence(a,s+1,c);
    }
    return c;
}
bool check(char *s,char *sub)
{
    if(*s==*sub)
        return check(s+1,sub+1);
    if(*sub=='\0')
        return true;
    else
        return false;
}
bool subs(char *s,char *sub)
{
    if(*s=='\0')
        return false;
    if(*s==*sub)
    {
        if(check(s,sub))
            return true;
        else
            subs(s+1,sub);
    }
    subs(s+1,sub);
}
void main()
{
    char s[100],s1[100],s2[100],s3[100],sub[100];
    printf("Enter a string to find its length:");
    scanf("%[^\n]%*c",s);
    printf("%d is the length",len(s));
    printf("\nenter two strings for comparison\n");
    scanf("%[^\n]%*c %[^\n]%*c",s1,s2);
    printf("%d\n",compari(s1,s2));
    printf("%s",stringrev(s));
    printf("\n%d",occur('e',s));
    printf("\n%d",occurence('i',s,-1));
    printf("\nEnter string substring\n");
    scanf("%[^\n]%*c %[^\n]%*c",s3,sub);
    if(subs(s3,sub))
        printf("Present");
    else
        printf("Not present");
}
