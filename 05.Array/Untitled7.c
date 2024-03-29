#include<stdio.h>
int main()
    {
        int n,i;
        scanf("%d",&n);

        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        for(i=0;i<n/2;i++)
        {
            int temp =arr[i];
            arr[i]=arr[n-1-i];
            arr[n-1-i]=temp;
            //arr[n-1-i]=arr[i];
        }
        printf("Array after reverse: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }

    }
