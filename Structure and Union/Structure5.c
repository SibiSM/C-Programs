#include<stdio.h>
typedef struct stud
{
    int roll;
    int m[5];
    float total;
}st;
void main()
{
    st s[3];
    int sum=0,i,j;
    for(i=0;i<3;i++)
    {
        s[i].roll=i;
        for( j=0;j<5;j++)
        {
            s[i].m[j]=((i+1)*10)+60+j+1;
        }
    }
    for( i=0;i<3;i++)
    {
        printf("\n\nid=%d",i+1);
        for( j=0;j<5;j++)
        {
            printf("\nMarks of subj %d=%d",j+1,s[i].m[j]);
        }
        sum=0;
        for(j=0;j<5;j++)
        {
            sum+=s[i].m[j];
        }
        s[i].total=sum;
        printf("\nStudent Total:%d",sum);
    }
    int n1;
    printf("\nEnter id to find sub total");
    scanf("%d",&n1);
    sum=0;
    for(int i=0;i<3;i++)
    {
        sum+=s[i].m[n1];
    }
    printf("\nsubject total is %d",sum);
}
