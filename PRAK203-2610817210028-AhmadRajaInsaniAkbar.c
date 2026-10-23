#include <stdio.h> 
int main (){
    float a,b,i,j,x,y,total;
    printf ("a=");
    scanf ("%f", &a);
    printf ("b=");
    scanf ("%f", &b);
    printf ("i=");
    scanf ("%f", &i);
    printf ("j=");
    scanf ("%f", &j);
    printf ("x=");
    scanf ("%f", &x);
    printf ("y=");
    scanf ("%f", &y);
    total= (a-b)*i/j-(x+y);
    printf ("%.3f\n", total);
}