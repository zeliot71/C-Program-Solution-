#include<stdio.h>
int main()
    {
        int a;
        float input,sum=0;
        printf("Enter how many number: ");
        scanf("%d",&a);
        for(int i=1;i<=a;i++)
        {
            printf("Enter input: ");
            scanf("%f",&input);
            sum+=input;
        }

        printf("AVG of %d inputs: %f",a,sum/a);
    }
