#include<stdio.h>
void main()
{
    float c,f;
    printf("Enter temperature in degree celsius: ");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("Temperature in degree fahrenheit is %f",f);
}
