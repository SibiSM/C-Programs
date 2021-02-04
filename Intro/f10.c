#include<stdio.h>
void main()
{
    int hr,min,secs;
    printf("Enter hours minutes and seconds\n");
    scanf("%d %d %d",&hr,&min,&secs);
    int tot,n;
    tot=hr*60*60+min*60+secs;
   printf("%d",tot);
    printf("Enter a number in seconds to convert into hour");
    scanf("%d",&n);
    hr=(n/(60*60));
    n=n-(hr*3600);
    min=n/(60);
    n=n-(min*60);
    secs=n;
    printf("%02d.%02d.%02d",hr,min,secs);
}
