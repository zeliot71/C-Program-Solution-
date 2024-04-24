#include<stdio.h>
int main()
    {
        /*int num1,num2,num3;
        scanf("%d %d %d",&num1,&num2,&num3);
        printf("Second value= %d\n",num2);
        */

        /*double a,b,x;
        scanf("%lf %lf",&a,&b);
        x = (3.1*a*a+2.01*b*b*b);
        printf("x = %.3lf", x);
        */

        double a,b,x;
        scanf("%lf %lf",&a,&b);
        x = (7.16*pow(b,2)+2.1*pow(a,3));
        printf("x = %.4lf",x);


    }
