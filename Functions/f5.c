#include<stdio.h>
// No address for register variable
// No global variable and static variables

void main()
{
     int i = 10;
    register int  *a = &i;
    printf("%d", *a);

}
