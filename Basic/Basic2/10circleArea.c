#include<stdio.h>
int main()
    {
        double Pi = 3.1416;
        double r,area;
        printf("Enter the value of r: ");
        scanf(" %lf",&r);

        area = Pi*r*r;
        printf("Area = %.5lf",area);
    }
