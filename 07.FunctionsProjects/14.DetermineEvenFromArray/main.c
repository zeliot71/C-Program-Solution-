#include <stdio.h>
#include <stdlib.h>
void onlyEven(int *arr,int n)
{
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Even numbers: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
}

int main()
{
    printf("Enter the size of Array: ");
    int n;
    scanf("%d",&n);

    int arr[n];
    onlyEven(arr,n);
    return 0;
}
