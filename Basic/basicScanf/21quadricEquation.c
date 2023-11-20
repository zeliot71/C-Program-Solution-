#include<stdio.h>
#include<math.h>
int main()
    {
        double a,b,c,temp,x1,x2;
        printf("Enter the values of a,b and c: ");
        scanf("%lf %lf %lf",&a,&b,&c);

        temp = sqrt(b*b-4*a*c);
        x1 = (-b+temp)/2*a;
        x2 = (-b-temp)/2*a;

        printf("x1 = %.2lf\n x2 = %.2lf\n",x1,x2);

    }
