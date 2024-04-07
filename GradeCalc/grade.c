#include <stdio.h>
void main()
{
    int r;
    float e,m,f,p=0,a;
    printf("Enter your roll number:\n");
    scanf("%d",&r);
    while(p>=0&&p<=100){
    printf("Enter marks:\n");
    scanf("%f%f%f",&e,&m,&f);
    a=((e+m+f)/3);
    p=p+a;
            if(p>=90&&p<=100){
            printf("%d scored A+ grade.",r);
            }
            else if(p>=80&&p<90){
            printf("%d scored A grade.",r);
            }
            else if(p>=70&&p<80){
            printf("%d scored B+ grade.",r);
            }
            else if(p>=60&&p<70){
            printf("%d scored B grade.",r);
            }
            else if(p>=50&&p<60){
            printf("%d scored C+ grade.",r);
            }
            else if(p>=40&&p<50){
            printf("%d scored C grade",r);
            }
            else if(p<40&&p>=0){
            printf("%d FAILED",r);
            }
            else{
            printf("INVALID INPUT");
            }
    }
}