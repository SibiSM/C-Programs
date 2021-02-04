#include<stdio.h>
struct s
{
    int c1;
    int c2;
};
struct s count_con(char *a,struct s res)
{
    if(*a)
    {
        if(*a=='0')
            res.c1++;
        else
            res.c2++;
        a++;
        res=count_con(a,res);
    }
    return res;
};
int main()
{
    struct s res={0,0};
    char a[10]="01011";
    res=count_con(a,res);
    printf("%d %d",res.c1,res.c2);
}
