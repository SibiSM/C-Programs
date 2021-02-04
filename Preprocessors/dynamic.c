#include<stdio.h>
#include<stdlib.h>
struct stud
{
    int no;
    char name[20];
    float cgpa;
};
void main()
{
    struct stud *ptr;
    int n;
    printf("Enter no of students to enter:");
    scanf("%d",&n);
    ptr=(struct stud *)malloc(n*sizeof(struct stud));
    printf("\nEnter rolno name and cgpa of student:\n");
    for(int i=0;i<n;i++)
    {
        printf("Details of student:%d",i+1);
        scanf("%d %s %f",&(ptr+i)->no,(ptr+i)->name,&(ptr+i)->cgpa);
    }
     for(int i=0;i<n;i++)
    {
        printf("\nStudent %d:\nRollno=%d Name=%s Cgpa=%.2f",i,(ptr+i)->no,(ptr+i)->name,(ptr+i)->cgpa);
    }
}
