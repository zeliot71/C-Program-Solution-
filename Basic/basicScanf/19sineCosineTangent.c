#include<stdio.h>
#include<math.h>
int main()
    {
        double input,sineValue,cosValue,tanValue;
        printf("Enter the angel in radian: ");
        scanf("%lf", &input);

        sineValue = sin(input);
        cosValue = cos(input);
        tanValue = tan(input);
        printf("Sine = %.2lf \n Cosine= %.2lf \n Tangent= %.2lf",sineValue,cosValue,tanValue);

    }
