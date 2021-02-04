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
