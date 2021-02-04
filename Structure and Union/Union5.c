#include<stdio.h>
union coll
{
    float cgpa;
    char *clg;
};
union stud
{
    int id;
    char *name;
    union coll a;
};
void main()
{
    union stud s;
    s.id=4;
    printf("id=%d\n",s.id);
    s.name="Sibism";
    printf("student name=%s\n",s.name);
    s.a.cgpa=8.11;
    printf("Cgpa=%.2f\n",s.a.cgpa);
    s.a.clg="Government College";
    printf("College=%s\n",s.a.clg);
}
