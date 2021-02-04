#include<stdio.h>
struct joining
{
    int join;
    int salary;
};
struct emp
{
    int id;
    char *name;
    struct joining j;
};
void main()
{
    struct emp e;
    e.id=1;
    e.name="Sibi";
    e.j.join=2015;
    e.j.salary=40000;
    printf("id=%d\nname=%s\njoin year=%d\nsalary=%d",e.id,e.name,e.j.join,e.j.salary);
}
