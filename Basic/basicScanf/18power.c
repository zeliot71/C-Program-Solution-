#include<stdio.h>
#include<math.h>
int main()
    {
        double a,b,sqrResult;
        printf("Enter the value of a and b: ");
        scanf("%lf%lf",&a,&b);

        sqrResult = pow(a,b);
        printf("%.2lf",sqrResult);

        return 0;
    }
