#include<stdio.h>
int main()
    {
    double a = 10.5445;
    double b = 5.145;

    double sum = a+b;
    double sub = a-b;
    double mul = a*b;
    double div = a/b;
    double rem = fmod(a,b);
    printf("%lf+%lf=%lf \n %lf-%lf=%lf \n %lf*%lf=%lf \n %lf/%lf=%lf \n",a,b,sum,a,b,sub,a,b,mul,a,b,div,a,b,rem);

    }
