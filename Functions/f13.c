#include<stdio.h>
int array1(int a[][2],int k)
{
	int i,j,sum=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		sum+=a[i][j];	
		}
	}
	return sum;
}
int array2(int a[][2],int k)
{
	int i,j,sum=99999;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		if(a[i][j]<sum)
			sum=a[i][j];	
		}
	}
	return sum;
}
int array3(int a[][2],int k)
{
	int i,j,sum=-9999;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(a[i][j]>sum)
				sum=a[i][j];	
		}
	}
	return sum;
}
int arr1(int b[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum+=b[i];
	}
	return sum;
}
int arr2(int b[],int n)
{
	int sum=9999,i;
	for(i=0;i<n;i++)
	{
	if(sum>b[i])
		sum=b[i];
	}
	return sum;
}
int arr3(int b[],int n)
{
	int sum=-9999,i;
	for(i=0;i<n;i++)
	{
	if(sum<b[i])
		sum=b[i];
	}
	return sum;
}
void transpose(int a[][2],int n)
{
	int i,j,k;
	for(i=0;i<2;i++)
	{
		for( j=i+1;j<2;j++)
		{
		int temp=a[i][j];
		a[i][j]=a[j][i];
		a[j][i]=temp;	
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void main()
{
	int a[2][2],i,j,sum1,sum2,min1,min2,max1,max2;
	printf("Enter elements for 2d array");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	transpose(a,2);
	sum1=array1(a,2);
	min1=array2(a,2);
	max1=array3(a,2);
	printf("%d = SUM \n %d =MIN\n %d=MAX\n",sum1,min1,max1);
	int b[4]={5,7,-2,6};
	sum2=arr1(b,4);
	min2=arr2(b,4);
	max2=arr3(b,4);
	printf("%d = SUM \n %d =MIN\n %d=MAX\n",sum2,min2,max2);
}
