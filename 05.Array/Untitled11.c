#include<stdio.h>
int main()
    {
        int n,i;
        scanf("%d",&n);
        int arrA[n];
        int arrB[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arrA[i]);
        }
        for(i=0;i<n;i++)
            {
                arrB[i]=arrA[i];
            }


        printf("Array A:");
        for(i=0;i<n;i++)
        {
            printf("%d ",arrA[i]);
        }
        printf("\n");
        printf("Array B:");
        for(i=n-1;i>=0;i--)
        {
            printf("%d ",arrB[i]);
        }



    }
