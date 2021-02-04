#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int stringlength(char s[])
{
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}
char* stringcopying(char s[],char *c)
{
    int i=0;
    while(s[i]!='\0')
    {
        c[i]=s[i];
        i++;
    }
    return c;
}
void strconcate(char s1[],char s2[])
{
    int i=0,k=0;
    char s3[100];
    while(s1[i]!='\0')
        {
        s3[k]=s1[i];
        i++;
        k++;
        }
    int j=0;
    while(s2[j]!='\0')
        {
        s3[k]=s2[j];
        j++;k++;
        }
    s3[k]='\0';
    printf("%s\n",s3);
}
int strcomparison(char *s1,char * s2)
{
    int i=0,j=0;
    while(s2[j]!='\0' && s1[i]!='\0')
        {
        if(s1[i]!=s2[j])
            return 0;
        else
        {
            i++;j++;
        }
        }
    if(s2[j]=='\0' && s1[i]=='\0')
        return 1;
    else
        return 0;
}
char * strreversing(char s1[])
{
    int len=strlen(s1)-1;
    int i=0;
    while(i<len)
    {
        char t=*(s1+i);
        *(s1+i)=*(s1+len);
        *(s1+len)=t;
        i++;len--;
    }
    return s1;
}
int firstoccur(char a,char s[])
{
  int i=0;
  while(s[i]!='\0')
  {
      if(a==s[i])
        return i;
      i++;
  }
  return -1;
}
int lastoccur(char a,char s[])
{
    int i=0,ch=-1;
  while(s[i]!='\0')
  {
      if(a==s[i])
            ch=i;
      i++;
  }
  return ch;
}
void main()
{
    char s[100],c[100],find[100],ma[100],sub[100],ma1[100],sub1[100];
    char first,last;
    scanf("%[^\n]%*c",s);
    int i=0,len=0;
    len=stringlength(s);
    printf("\n%d is the length of the string\n",len);
    printf("\n%s is the copied string\n",stringcopying(c,s));
    char s1[100],s2[100],s3[100];
    printf("Enter string1 and string 2\n");
    scanf("%[^\n]%*c %[^\n]%*c",s1,s2);
    printf("\nString concatenation is:");
    strconcate(s1,s2);
    printf("\nComparison:\n");
    if(strcomparison(s1,s2))
        printf("Both Strings are equal\n");
    else
        printf("Both are not equal strings\n");
    printf("reversed is=%s",strreversing(s1));
    printf("\nEnter a new string to find occurences\n");
    scanf("%[^\n]%*c",find);
    printf("\n Enter the to find first occurence character");
    scanf("%c",&first);
    printf("%c occured at position %d",first,firstoccur(first,find));
    printf("\n Enter the last occurence character");
    scanf("%c",&last);
    printf("%c occured at position %d",first,lastoccur(first,find));

}
