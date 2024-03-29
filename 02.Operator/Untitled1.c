#include<stdio.h>
#include<math.h>
int main()
    {
        float x,y;
        scanf("%f%f",&x,&y);

        printf(" Addition: %.1f\n Subtraction: %.1f\n Multiplication: %.1f\n Quotient: %.1f\n Reminder: %.1f\n",x+y,x-y,x*y,x/y, fmod(x,y));
    }
