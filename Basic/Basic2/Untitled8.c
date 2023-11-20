#include<stdio.h>
int main()
    {
        double a,b,c,d,result;
        a = 2.3;
        b = 5.8;
        c = 1.1;
        d = 3.5;
        result = (a*b-c)*d-a/d;
        printf("(%.1lf*%.1lf-%.1lf)*%.1lf-%.1lf/%.1lf = %.6lf",a,b,c,d,a,d,result);

    }
