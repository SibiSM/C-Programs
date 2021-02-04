 #include<stdio.h>
 #define PI 3.14
 void main()
 {
     const double pi=3.14;
     printf("\nEnter radius of circle");
     int r;
     scanf("%d",&r);
     printf("\n%.2lf is area of the circle",pi*r*r);
     printf("\n%.2lf is perimeter of the circle",pi*2*r);
     printf("\n Symbolic Constant:\nReplace the value in it where const cant be changed due to const keyword\n");
     printf("\n%.2lf is area of the circle",PI*r*r);
     printf("\n%.2lf is perimeter of the circle",PI*2*r);
}
