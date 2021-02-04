/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("With temp variable \n Enter two numbers:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Numbers %d %d",a,b);
    printf("\n\tWithout temp variable\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers %d %d",a,b);
    printf("\n\tUsing Xor operation");
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Numbers %d %d",a,b);
}
 // Second Program
 #include<stdio.h>
 void main()
 {
     const double pi=3.14;
     printf("\nEnter radius of circle");
     int r;
     scanf("%d",&r);
     printf("\n%.2lf is area of the circle",pi*r*r);
     printf("\n%.2lf is perimeter of the circle",pi*2*r);
 }

//Program 3
#include<stdio.h>
void main()
{
    int k,i,j;
    scanf("%d",&i);
    k=i--/10;
    printf("%d %d",k,i);
}

// Program 4
#include<stdio.h>
void main()
{
    int n,rev=0;
    printf("Enter a four digit number");
    scanf("%d",&n);
    while(n>0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("\n%d is the reversed number",rev);
}
*/
// Program 5
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
union iptolint
{
 char ip[16];
 unsigned long int n;
};
unsigned long int conv(char []);

void main()
{
 union iptolint ipl;
 printf(" Read the IP Address to be convertedn");
 scanf("%s",ipl.ip);
 ipl.n=conv(ipl.ip);
 printf(" Equivalent 32-bit long int is : %lun",ipl.n);
}

unsigned long int conv(char ipadr[])
{
 unsigned long int num=0,val;
 char *tok,*ptr;
 int p=24;
 tok=strtok(ipadr,".");
 while( tok != NULL)
 {
  val=strtoul(tok,&ptr,0);
  num+=  val * (long)pow(2,p);
  p=p-8;
  printf("%lun %lun\n",num,val);
  tok=strtok(NULL,".");
 }
 return(num);
}
