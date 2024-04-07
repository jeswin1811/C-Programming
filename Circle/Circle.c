#include <stdio.h>
void main()
{
    int a,c,r;
    printf("Enter radius of the circle: \n");
    scanf("%d",&r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("Area of circle is %d and circumference of circle is %d",a,c);
}