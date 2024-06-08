#include <stdio.h>
#include <stdlib.h>

void newArray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //Swapping array
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
             if(arr[j]>arr[j+1])
             {
                 int temp =arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
             }
        }

    }
    printf("Modified array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    newArray(arr,n);

    return 0;
}
