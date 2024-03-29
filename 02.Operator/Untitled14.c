#include<stdio.h>
#include<math.h>
int main()
    {
        float x,c,a,b;

        printf("Enter a float number: ");
        scanf("%f",&x);
        c= x;
        a = ceil(x);
        b= floor(x);
        printf(" A: %.f\n B: %.f\n C: %.1f\n",a,b,c);
    }
