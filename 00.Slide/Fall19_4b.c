#include<stdio.h>
int main()
{
    int arr[500];
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int sumOdd=0;
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sumOdd+=arr[i];
        }
    }
    printf("Sum of odd indices: %d\n",sumOdd);

    printf("Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
