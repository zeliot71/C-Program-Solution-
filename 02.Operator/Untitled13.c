#include<stdio.h>
#include<math.h>

int main()
    {
        float x;
        double equation;
        scanf("%f",&x);

        equation = 2*pow(cos(x),2)-sqrt(3)*sin(x)+sin(x/2);
        printf("%lf",equation);
    }
