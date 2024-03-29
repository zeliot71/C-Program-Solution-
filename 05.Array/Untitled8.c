#include<stdio.h>
#include<limits.h>

int main()
    {
        int n,i,min= INT_MIN,max=INT_MAX,index1,index2;
        printf("Enter the size of array: ");
        scanf("%d",&n);
        int arr[n];

        printf("Enter array elements: \n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        for(i=0;i<n;i++)
        {
            if(arr[i]<max)
            {
                max=arr[i];
                index1=i;
            }
            if(arr[i]>min)
            {
                min=arr[i];
                index2=i;
            }
        }
        printf("Min : %d, Index: %d\n",min,index2);
        printf("Max : %d, Index: %d\n",max,index1);
    }
