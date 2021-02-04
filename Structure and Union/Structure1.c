#include<stdio.h>
#include<string.h>
#include<stddef.h>
struct stud
{
    int id;
    char name[10];
    float a;
}s;
void main()
{
    s.id=4;
    s.a=3.4;
    strcpy(s.name,"Sibi");
    struct stud *p;
    p=&s;
    printf("id=%d name=%s\n",p->id,p->name);
    printf("%d %d\n",sizeof(p->id),sizeof(p->name));
    printf("Offset id=%d name=%d float=%d\n",offsetof(struct stud,id),offsetof(struct stud,name),offsetof(struct stud,a));
    printf("\nBase addres of struct=%d\nBase address of id=%d\nBase address of name%d\n",&s,&s.id,&s.name);

}
