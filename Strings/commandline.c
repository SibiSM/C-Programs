#include<stdio.h>
#include<stdlib.h>
void main(int argc,char * argv[])
{
	int a,b,sum;
	int i; //for loop counter

	sum=0;
	for(i=1; i<argc; i++)
	{
		printf("arg[%2d]: %d\n",i,atoi(argv[i]));
		sum += atoi(argv[i]);
	}

	printf("SUM of all values: %d\n",sum);
}
