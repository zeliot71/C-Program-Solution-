#include<stdio.h>
int main()
    {
        int i,n;
        double sum=0;
        scanf("%d",&n);
        float arr[n];

        for(int i=0;i<n;i++)
        {
            scanf("%f",&arr[i]);
                sum+=arr[i];
        }
        printf("Average of array elements: %.2lf",sum/n);
    }

