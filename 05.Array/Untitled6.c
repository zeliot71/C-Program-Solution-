#include<stdio.h>
int main()
    {
        int n,i,j,k;
        scanf("%d",&n);
        int arr1[n];
        int arr2[n];
        int arr3[n];

        for(i=0;i<n;i++)
        {
            printf("Enter array1 element: ");
            scanf("%d",&arr1[i]);
            printf("Enter array2 element: ");
            scanf("%d",&arr2[i]);
            arr3[i]=arr1[i]+arr2[i];
        }

        for(i=0;i<n;i++)
        {
            printf("%d ",arr3[i]);
        }
    }
