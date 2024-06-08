#include <stdio.h>
#include <stdlib.h>
void minimum(int *arr,int n)
{

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int min=arr[0];
      for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
            min = arr[i];
    }
    printf("Minimum value: %d",min);
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    minimum(arr,n);


    return 0;
}
