#include<stdio.h>
#include<limits.h>
#include<math.h>
long reverse(long int n)
{
    int rev=0;
    while(n>0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
void main()
{
    long int a=10500,b=250,c=0,k=0,r1,r2,r4=0,r3=0,temp=0,flag=0,sub=0,check=0,check2=0,c2=0;
    printf("%ld \t%ld\n",a,b);
    while(a>0 && b>0)
        {
            r1=a%10;
            r2=b%10;
            if(r1-r2==0 && !check)
               {
                c++;
                }
            else
                check=1;
            if((r1+r2)%10==0 && !check2)
                c2++;
            else
                check2=1;
            if(r1>=r2)
            {
             r4=r1-r2-flag;
             sub=sub*10+(r4);
             flag=0;
            }
            else
            {
             sub=(sub*10)+(r1+10-r2);
             flag=1;
            }
            r3=r1+r2+r3;
            temp=(temp*10)+(r3%10);
            r3=r3/10;
            a=a/10;
            b=b/10;
        }
    while(a)
    {
        r1=a%10;
        if(r1-flag==0 && !check)
        {
        c++;
        }
        else
            check=1;
        if(r1+flag==10 && !check)
            {c2++;}
        else
            check2=0;
        r3=r1+r3;
        r4=r1-flag;
        sub=sub*10+(r4);
        flag=0;
        temp=(temp*10)+(r3%10);
        r3=r3/10;
        a=a/10;
    }
    while(b)
    {
      r2=b%10;
      r3=r2+r3;
      temp=(temp*10)+(r3%10);
      r3=r3/10;
      b=b/10;
    }
    if(r3)
    {
        temp=(temp*10)+(r3%10);
    }
    c=pow(10,c);
    c2=pow(10,c2);
    printf("%ld",reverse(sub)*c);
    printf("\n%ld",reverse(temp)*c2);
}
