#include<stdio.h>
#include<math.h>
int main()
    {
        float a;
        int cValue,fValue;
        printf("Enter a float number: ");
        scanf("%f", &a);

        cValue = (int)ceil(a);
        fValue = (int)floor(a);

        printf("Ceiling: %d\n Floor: %d\n",cValue,fValue);

        return 0;

    }
