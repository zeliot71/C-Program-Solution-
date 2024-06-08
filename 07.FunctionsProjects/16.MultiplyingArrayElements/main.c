#include <stdio.h>
#include <stdlib.h>

void newArray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr[i]*=2;
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
