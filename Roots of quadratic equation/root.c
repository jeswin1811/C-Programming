#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,x,y;
    printf("Enter values fo a,b and c w.r.t 'ax^2+bx+c': ");
    scanf("%f%f%f",&a,&b,&c);
    d = sqrt((b*b)-(4*a*c));
    if (d>=0)
    {
        x= (-b+d)/2*a;
        y= (-b-d)/2*a;
        printf("Roots the quadratic equation is %f and %f",x,y);
    }
    else
    {
        printf("Roots are imaginary.");
    }
}