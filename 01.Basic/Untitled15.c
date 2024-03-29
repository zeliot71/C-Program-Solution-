#include<stdio.h>
int main()
    {
        float x;
        scanf("%f",&x);

        printf("Right Justified 10 columns:%10.f\n",x);
        printf("Right justified 2 columns:%2.f\n", x);
        printf("Rounded to two decimal point:%.2f\n",x);
        printf("Rounded to integer value:%.0f\n",x);
        printf("Exponential notation:%e\n",x);
    }
